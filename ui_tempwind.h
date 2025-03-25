/********************************************************************************
** Form generated from reading UI file 'tempwind.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPWIND_H
#define UI_TEMPWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tempwind
{
public:
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QListWidget *listWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Tempwind)
    {
        if (Tempwind->objectName().isEmpty())
            Tempwind->setObjectName("Tempwind");
        Tempwind->resize(911, 619);
        Tempwind->setSizeGripEnabled(false);
        Tempwind->setModal(false);
        tabWidget_2 = new QTabWidget(Tempwind);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 30, 911, 591));
        tab = new QWidget();
        tab->setObjectName("tab");
        listWidget = new QListWidget(tab);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 911, 601));
        listWidget->setTextElideMode(Qt::TextElideMode::ElideMiddle);
        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(7, 2, __qtablewidgetitem26);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 901, 561));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget::item:selected { background-color: gray; color: white; }"));
        tabWidget_2->addTab(tab_2, QString());

        retranslateUi(Tempwind);

        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Tempwind);
    } // setupUi

    void retranslateUi(QDialog *Tempwind)
    {
        Tempwind->setWindowTitle(QCoreApplication::translate("Tempwind", "Dialog", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("Tempwind", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\264\320\265\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Tempwind", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Tempwind", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Tempwind", "\320\246\320\265\320\275\320\260", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Tempwind", "\320\236\320\263\321\203\321\200\321\206\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Tempwind", "10 \321\210\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Tempwind", "120 \321\200\321\203\320\261/\320\272\320\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Tempwind", "\320\257\320\271\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Tempwind", "1 \321\203\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Tempwind", "110 \321\200\321\203\320\261/\321\203\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(2, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Tempwind", "\320\234\320\276\320\273\320\276\320\272\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(2, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Tempwind", "1 \321\210\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(2, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Tempwind", "100 \321\200\321\203\320\261/\321\210\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(3, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Tempwind", "\320\222\320\260\321\204\320\273\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(3, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Tempwind", "2 \321\210\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(3, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Tempwind", "87 \321\200\321\203\320\261/\321\210\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(4, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Tempwind", "\320\237\320\276\320\274\320\270\320\264\320\276\321\200\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(4, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Tempwind", "2 \321\203\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(4, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Tempwind", "250 \321\200\321\203\320\261/\320\272\320\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(5, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Tempwind", "\320\242\320\265\321\201\321\202\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(5, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Tempwind", "3 \321\203\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(5, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Tempwind", "80 \321\200\321\203\320\261/ \321\203\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(6, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Tempwind", "\320\223\321\200\321\203\320\264\320\272\320\260 \320\272\321\203\321\200\320\270\320\275\320\260\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(6, 1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Tempwind", "1 \321\203\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(6, 2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("Tempwind", "300 \321\200\321\203\320\261/ \321\203\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(7, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("Tempwind", "\320\241\321\213\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(7, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("Tempwind", "1 \321\210\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(7, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("Tempwind", "800 \321\200\321\203\320\261/ \320\272\320\263", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QCoreApplication::translate("Tempwind", "\320\237\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tempwind: public Ui_Tempwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPWIND_H
