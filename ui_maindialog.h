/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *mainTab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QGroupBox *groupBox_3;
    QWidget *subTab;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QStringLiteral("MainDialog"));
        MainDialog->resize(800, 600);
        MainDialog->setMinimumSize(QSize(600, 0));
        MainDialog->setMaximumSize(QSize(16777215, 16777215));
        MainDialog->setAutoFillBackground(true);
        MainDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(MainDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(MainDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabBarAutoHide(false);
        mainTab = new QWidget();
        mainTab->setObjectName(QStringLiteral("mainTab"));
        gridLayout_2 = new QGridLayout(mainTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(mainTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_ = new QLineEdit(groupBox);
        lineEdit_->setObjectName(QStringLiteral("lineEdit_"));

        verticalLayout->addWidget(lineEdit_);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        groupBox_3 = new QGroupBox(mainTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));

        gridLayout_3->addWidget(groupBox_3, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(mainTab, QString());
        subTab = new QWidget();
        subTab->setObjectName(QStringLiteral("subTab"));
        tabWidget->addTab(subTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(MainDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "PT_OTOMOS", 0));
        groupBox->setTitle(QApplication::translate("MainDialog", "PT", 0));
        groupBox_3->setTitle(QApplication::translate("MainDialog", "\347\265\220\346\236\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(mainTab), QApplication::translate("MainDialog", "Main", 0));
        tabWidget->setTabText(tabWidget->indexOf(subTab), QApplication::translate("MainDialog", "\345\210\244\346\226\255\345\217\257\350\203\275\343\203\235\343\202\261", 0));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
