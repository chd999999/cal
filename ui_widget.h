/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_div;
    QPushButton *pushButton_negative;
    QPushButton *pushButton_0;
    QPushButton *pushButton_point;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_sqrt;
    QButtonGroup *numGroup;
    QButtonGroup *symbolGroup;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(398, 426);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(textEdit);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_add = new QPushButton(Widget);
        symbolGroup = new QButtonGroup(Widget);
        symbolGroup->setObjectName(QString::fromUtf8("symbolGroup"));
        symbolGroup->addButton(pushButton_add);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));

        gridLayout->addWidget(pushButton_add, 1, 3, 1, 1);

        pushButton_1 = new QPushButton(Widget);
        numGroup = new QButtonGroup(Widget);
        numGroup->setObjectName(QString::fromUtf8("numGroup"));
        numGroup->addButton(pushButton_1);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(Widget);
        numGroup->addButton(pushButton_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(Widget);
        numGroup->addButton(pushButton_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_sub = new QPushButton(Widget);
        symbolGroup->addButton(pushButton_sub);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));

        gridLayout->addWidget(pushButton_sub, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(Widget);
        numGroup->addButton(pushButton_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(Widget);
        numGroup->addButton(pushButton_5);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(Widget);
        numGroup->addButton(pushButton_6);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_mul = new QPushButton(Widget);
        symbolGroup->addButton(pushButton_mul);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));

        gridLayout->addWidget(pushButton_mul, 3, 3, 1, 1);

        pushButton_7 = new QPushButton(Widget);
        numGroup->addButton(pushButton_7);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_8 = new QPushButton(Widget);
        numGroup->addButton(pushButton_8);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 4, 1, 1, 1);

        pushButton_9 = new QPushButton(Widget);
        numGroup->addButton(pushButton_9);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 4, 2, 1, 1);

        pushButton_div = new QPushButton(Widget);
        symbolGroup->addButton(pushButton_div);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));

        gridLayout->addWidget(pushButton_div, 4, 3, 1, 1);

        pushButton_negative = new QPushButton(Widget);
        pushButton_negative->setObjectName(QString::fromUtf8("pushButton_negative"));

        gridLayout->addWidget(pushButton_negative, 5, 0, 1, 1);

        pushButton_0 = new QPushButton(Widget);
        numGroup->addButton(pushButton_0);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 5, 1, 1, 1);

        pushButton_point = new QPushButton(Widget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));

        gridLayout->addWidget(pushButton_point, 5, 2, 1, 1);

        pushButton_equal = new QPushButton(Widget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));

        gridLayout->addWidget(pushButton_equal, 5, 3, 1, 1);

        pushButton_clear = new QPushButton(Widget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_clear, 1, 0, 1, 1);

        pushButton_backspace = new QPushButton(Widget);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));

        gridLayout->addWidget(pushButton_backspace, 1, 1, 1, 1);

        pushButton_sqrt = new QPushButton(Widget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));

        gridLayout->addWidget(pushButton_sqrt, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Widget", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("Widget", "-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("Widget", "*", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton_div->setText(QCoreApplication::translate("Widget", "/", nullptr));
        pushButton_negative->setText(QCoreApplication::translate("Widget", "\302\261", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pushButton_point->setText(QCoreApplication::translate("Widget", ".", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("Widget", "=", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        pushButton_backspace->setText(QCoreApplication::translate("Widget", "backspace", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("Widget", "\342\210\232\357\277\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
