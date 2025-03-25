/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *listWidget_users;
    QLabel *peopleCount;
    QLabel *label;
    QLabel *departementName;
    QLabel *lblCount;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButtonDel;
    QPushButton *pushButtonRed;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(937, 638);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        listWidget_users = new QListWidget(groupBox);
        new QListWidgetItem(listWidget_users);
        listWidget_users->setObjectName("listWidget_users");

        gridLayout->addWidget(listWidget_users, 6, 0, 1, 3);

        peopleCount = new QLabel(groupBox);
        peopleCount->setObjectName("peopleCount");
        peopleCount->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font : bold\n"
"}"));

        gridLayout->addWidget(peopleCount, 4, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        departementName = new QLabel(groupBox);
        departementName->setObjectName("departementName");
        departementName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font : bold;\n"
"font-size: 35px;\n"
"text-align: center;\n"
"font-family: Great Vibes;\n"
"}"));

        gridLayout->addWidget(departementName, 1, 1, 1, 1);

        lblCount = new QLabel(groupBox);
        lblCount->setObjectName("lblCount");

        gridLayout->addWidget(lblCount, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName("pushButton_add");

        horizontalLayout->addWidget(pushButton_add);

        pushButtonDel = new QPushButton(groupBox);
        pushButtonDel->setObjectName("pushButtonDel");

        horizontalLayout->addWidget(pushButtonDel);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonRed = new QPushButton(groupBox);
        pushButtonRed->setObjectName("pushButtonRed");

        verticalLayout->addWidget(pushButtonRed);


        gridLayout->addLayout(verticalLayout, 1, 2, 4, 1);


        verticalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 937, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());

        const bool __sortingEnabled = listWidget_users->isSortingEnabled();
        listWidget_users->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_users->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\267\320\265\321\206", nullptr));
        listWidget_users->setSortingEnabled(__sortingEnabled);

        peopleCount->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label->setText(QString());
        departementName->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\270 \321\201\320\277\320\270\321\201\320\272\320\270", nullptr));
        lblCount->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\277\320\270\321\201\320\272\320\276\320\262", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButtonDel->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButtonRed->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
