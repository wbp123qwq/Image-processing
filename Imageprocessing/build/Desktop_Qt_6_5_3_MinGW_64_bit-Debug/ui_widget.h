/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QLabel *label_8;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1186, 835);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 370, 521, 401));
        label->setFrameShape(QFrame::Panel);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 370, 521, 401));
        label_2->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 340, 69, 19));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(630, 340, 121, 16));
        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 20, 1121, 311));
        label_5->setFrameShape(QFrame::Panel);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 180, 93, 28));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(150, 120, 93, 28));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(150, 180, 93, 28));
        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(980, 150, 69, 19));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(970, 110, 113, 25));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(850, 110, 113, 25));
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(850, 150, 69, 19));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1000, 190, 93, 28));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 120, 93, 28));
        label_8 = new QLabel(Widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(290, 30, 541, 291));
        label_8->setFrameShape(QFrame::Panel);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Widget", "\345\216\237\345\233\276", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\244\204\347\220\206\344\271\213\345\220\216\347\232\204\345\233\276\347\211\207", nullptr));
        label_5->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Widget", "\347\201\260\345\272\246\345\244\204\347\220\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\346\250\241\347\263\212\345\244\204\347\220\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\350\276\271\347\274\230\345\214\226\345\244\204\347\220\206", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "ipv4\345\234\260\345\235\200", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
