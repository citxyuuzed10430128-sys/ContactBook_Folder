/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QTableWidget *contactBook;
    QLineEdit *lineEdit_1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *insertButton;
    QPushButton *exportButton;
    QPushButton *importButton;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(800, 600);
        contactBook = new QTableWidget(MyWidget);
        contactBook->setObjectName("contactBook");
        contactBook->setGeometry(QRect(110, 30, 511, 281));
        lineEdit_1 = new QLineEdit(MyWidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(220, 330, 391, 21));
        label = new QLabel(MyWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 330, 53, 15));
        label_2 = new QLabel(MyWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 370, 53, 15));
        label_3 = new QLabel(MyWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 410, 53, 15));
        label_4 = new QLabel(MyWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 450, 53, 15));
        lineEdit_2 = new QLineEdit(MyWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 370, 391, 21));
        lineEdit_3 = new QLineEdit(MyWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(220, 410, 391, 21));
        lineEdit_4 = new QLineEdit(MyWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(220, 450, 391, 21));
        insertButton = new QPushButton(MyWidget);
        insertButton->setObjectName("insertButton");
        insertButton->setGeometry(QRect(160, 500, 131, 51));
        exportButton = new QPushButton(MyWidget);
        exportButton->setObjectName("exportButton");
        exportButton->setGeometry(QRect(420, 500, 141, 51));
        importButton = new QPushButton(MyWidget);
        importButton->setObjectName("importButton");
        importButton->setGeometry(QRect(665, 420, 121, 161));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        label->setText(QCoreApplication::translate("MyWidget", "\345\255\270\350\231\237", nullptr));
        label_2->setText(QCoreApplication::translate("MyWidget", "\347\217\255\347\264\232", nullptr));
        label_3->setText(QCoreApplication::translate("MyWidget", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("MyWidget", "\351\233\273\350\251\261", nullptr));
        insertButton->setText(QCoreApplication::translate("MyWidget", "\346\226\260\345\242\236", nullptr));
        exportButton->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\207\272", nullptr));
        importButton->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
