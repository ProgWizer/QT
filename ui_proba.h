/********************************************************************************
** Form generated from reading UI file 'proba.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROBA_H
#define UI_PROBA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>

QT_BEGIN_NAMESPACE

class Ui_Proba
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QSplitter *splitter;
    QPushButton *pushButtonadd;
    QPushButton *pushButtondel;

    void setupUi(QDialog *Proba)
    {
        if (Proba->objectName().isEmpty())
            Proba->setObjectName("Proba");
        Proba->resize(937, 630);
        horizontalLayout_2 = new QHBoxLayout(Proba);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(Proba);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);

        horizontalLayout->addWidget(tabWidget);

        splitter = new QSplitter(Proba);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Vertical);
        pushButtonadd = new QPushButton(splitter);
        pushButtonadd->setObjectName("pushButtonadd");
        splitter->addWidget(pushButtonadd);
        pushButtondel = new QPushButton(splitter);
        pushButtondel->setObjectName("pushButtondel");
        splitter->addWidget(pushButtondel);

        horizontalLayout->addWidget(splitter);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Proba);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Proba);
    } // setupUi

    void retranslateUi(QDialog *Proba)
    {
        Proba->setWindowTitle(QCoreApplication::translate("Proba", "Dialog", nullptr));
        pushButtonadd->setText(QCoreApplication::translate("Proba", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\272\320\273\320\260\320\264\320\272\321\203", nullptr));
        pushButtondel->setText(QCoreApplication::translate("Proba", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\320\272\320\273\320\260\320\264\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Proba: public Ui_Proba {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROBA_H
