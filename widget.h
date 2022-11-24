#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QAbstractButton>
#include <QStack>
#include <QQueue>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QString numStr;  //当前输入的数
    QString symbolStr;  //当前输入的符号
    QString showStr;  //显示在屏幕上的表达式
    QStringList expressionList;  //表达式
    QStack<QString> suffixSymbolStack;
    QStack<QString> suffixNumStack;
    QStack<QString> numStack;

public slots:
    void clickNumFunc(QAbstractButton *button);
    void clickSymbolFunc(QAbstractButton *button);
    void on_pushButton_equal_clicked();

public:
    int exchangeSymbol(QString symbol);
    QStack<QString> suffixFunc();
    void suffixfunc2(QString);

private slots:
    void on_pushButton_clear_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_negative_clicked();

    void on_pushButton_sqrt_clicked();

    void on_pushButton_backspace_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
