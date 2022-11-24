#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("计算器2.0");
    this->setWindowIcon(QIcon(":/new/prefix1/image/calculator.png"));

    ui->textEdit->setReadOnly(true);
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit->setText("0");
    ui->lineEdit->setAlignment(Qt::AlignRight);
    connect(ui->numGroup,QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked),this,&Widget::clickNumFunc);
    connect(ui->symbolGroup,QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked),this,&Widget::clickSymbolFunc);
}

Widget::~Widget()
{
    delete ui;
}

//点击数字
void Widget::clickNumFunc(QAbstractButton *button)
{
    qDebug() << button->text();
    numStr.append(button->text());
    showStr.append(button->text());
    ui->lineEdit->setText(showStr);
}

//点击+-*/
void Widget::clickSymbolFunc(QAbstractButton *button)
{
    qDebug() << button->text();
    expressionList.append(numStr);
    expressionList.append(button->text());
    numStr.clear();
    showStr.append(button->text());
    ui->lineEdit->setText(showStr);
}

//等于
void Widget::on_pushButton_equal_clicked()
{
    if(!numStr.isEmpty())  //防止退格时numStr刚好删完
    {
        expressionList.append(numStr);
    }

    QStack<QString> tempStack = suffixFunc();  //中缀转后缀（逆波兰表达式）
    qDebug() << "tempStack" << tempStack;
    QStack<QString> reverseSuffixStack;
    while (!tempStack.isEmpty()) {
        reverseSuffixStack.push(tempStack.pop());
    }
    QString currentStr;
    while (!reverseSuffixStack.isEmpty()) {
        currentStr = reverseSuffixStack.pop();
        if((currentStr != "+") && (currentStr != "-") && (currentStr != "*") && (currentStr != "/"))
        {
            numStack.push(currentStr);
        }
        else
        {
            int currentNum = exchangeSymbol(currentStr);
            switch (currentNum) {
            case 1:
            {
                int num1 = numStack.pop().toDouble();
                int num2 = numStack.pop().toDouble();
                int tempAddResultNum = num2 + num1;
                numStack.push(QString::number(tempAddResultNum));
                break;
            }
            case 2:
            {
                int num1 = numStack.pop().toDouble();
                int num2 = numStack.pop().toDouble();
                int tempSubResultNum = num2 - num1;
                numStack.push(QString::number(tempSubResultNum));
                break;
            }
            case 3:
            {
                int num1 = numStack.pop().toDouble();
                int num2 = numStack.pop().toDouble();
                int tempMulResultNum = num2 * num1;
                numStack.push(QString::number(tempMulResultNum));
                break;
            }
            case 4:
            {
                int num1 = numStack.pop().toDouble();
                int num2 = numStack.pop().toDouble();
                int tempDivResultNum = num2 / num1;
                numStack.push(QString::number(tempDivResultNum));
                break;
            }
            default:
                break;
            }
        }
    }

    qDebug() << "numStack" << numStack;
    ui->lineEdit->setText(showStr + "=" + numStack.last());
    ui->textEdit->append(showStr + "=" + numStack.last());
}

//判断+-*/符号
int Widget::exchangeSymbol(QString symbol)
{
    if(symbol == "+")
    {
        return 1;
    }
    else if(symbol == "-")
    {
        return 2;
    }
    else if(symbol == "*")
    {
        return 3;
    }
    else if(symbol == "/")
    {
        return 4;
    }
    else
    {
        return 5;
    }
}

//中缀转后缀
QStack<QString> Widget::suffixFunc()
{
    QString tempStr;
    while (/*!expressionQueue.isEmpty()*/ !expressionList.isEmpty()) {
//        tempStr = expressionQueue.dequeue();
        tempStr = expressionList.first();
        expressionList.removeFirst();
        if((tempStr != "+") && (tempStr != "-") && (tempStr != "*") && (tempStr != "/"))
        {
            suffixNumStack.push(tempStr);
        }
        else
        {
            if(suffixSymbolStack.isEmpty())
            {
                suffixSymbolStack.push(tempStr);
            }
            else
            {
                suffixfunc2(tempStr);
                suffixSymbolStack.push(tempStr);
            }

        }
    }
    while (!suffixSymbolStack.isEmpty()) {
        suffixNumStack.push(suffixSymbolStack.pop());
    }
    return suffixNumStack;
}

//计算符号
void Widget::suffixfunc2(QString tempStr)
{
    if(suffixSymbolStack.isEmpty())
    {
        return ;
    }
    else if((tempStr == "*") || (tempStr == "/"))
    {
        QString str = suffixSymbolStack.last();
        int tempNum = exchangeSymbol(str);
        switch (tempNum) {
        case 1:
        {
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            suffixNumStack.push(suffixSymbolStack.pop());
            suffixfunc2(tempStr);
            break;
        }
        case 4:
        {
            suffixNumStack.push(suffixSymbolStack.pop());
            suffixfunc2(tempStr);
            break;
        }
        default:
            qDebug() << "乘除有问题";
            break;
        }
    }
    else if((tempStr == "+") || (tempStr == "-"))
    {
        QString str = suffixSymbolStack.last();
        int tempNum = exchangeSymbol(str);
        switch (tempNum) {
        case 1:
        {
            suffixNumStack.push(suffixSymbolStack.pop());
            suffixfunc2(tempStr);
            break;
        }
        case 2:
        {
            suffixNumStack.push(suffixSymbolStack.pop());
            suffixfunc2(tempStr);
            break;
        }
        case 3:
        {
            suffixNumStack.push(suffixSymbolStack.pop());
            suffixfunc2(tempStr);
            break;
        }
        case 4:
        {
            suffixNumStack.push(suffixSymbolStack.pop());
            suffixfunc2(tempStr);
            break;
        }
        default:
            qDebug() << "加减有问题";
            break;
        }
    }
    else
    {
        qDebug() << "符号有问题";
    }
}

//归零
void Widget::on_pushButton_clear_clicked()
{
    numStack.clear();
    ui->lineEdit->clear();
    ui->lineEdit->setText("0");
    numStr.clear();
    showStr.clear();
    suffixSymbolStack.clear();
    suffixNumStack.clear();
    expressionList.clear();
}

//小数点
void Widget::on_pushButton_point_clicked()
{
    if(numStr.isEmpty())
    {
        numStr = "0.";
        showStr.append("0.");
    }
    else
    {
        numStr = numStr + ".";
        showStr.append(".");
    }

    ui->lineEdit->setText(showStr);
}

//正负号
void Widget::on_pushButton_negative_clicked()
{

}

//平方根
void Widget::on_pushButton_sqrt_clicked()
{

}

//退格
void Widget::on_pushButton_backspace_clicked()
{
    if(!numStr.isEmpty())  //如果操作数不为空则删除最后一位
    {
        numStr.chop(1);
    }
    else if((expressionList.last() == "+") || (expressionList.last() == "-") ||\
            (expressionList.last() == "*") || (expressionList.last() == "/"))   //删除操作符
    {
        expressionList.removeLast();
    }
    else  //删的多会用到
    {
        numStr = expressionList.last();
        expressionList.removeLast();
        numStr.chop(1);
        if(!numStr.isEmpty())
        {
            expressionList.append(numStr);
            numStr.clear();
        }
    }
    showStr.chop(1);
    ui->lineEdit->setText(showStr);
    qDebug() << "size" << expressionList.size() << "data" << expressionList;
}

