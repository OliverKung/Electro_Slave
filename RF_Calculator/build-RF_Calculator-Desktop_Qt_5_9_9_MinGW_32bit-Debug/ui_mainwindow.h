/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Tab_RL_Calc;
    QComboBox *InductorComboBox;
    QLabel *InductanceLabel;
    QLabel *FrequencyInductanceLabel;
    QComboBox *InductorFrequencyComboBox;
    QTextBrowser *InductanceOutput;
    QPushButton *InductorCalcpushButton;
    QLineEdit *InductorInductanceEdit;
    QLineEdit *InductorFrequencyEdit;
    QLabel *InductanceLabel_2;
    QComboBox *CapcitanceComboBox;
    QComboBox *CapcitanceFrequencyComboBox;
    QLineEdit *CapcitorCapcitanceEdit;
    QPushButton *CapcitanceCalcpushButton;
    QLabel *InductanceLabel_3;
    QTextBrowser *CapcitanceOutput;
    QLabel *InductanceLabel_4;
    QLineEdit *CapcitorFrequencyEdit;
    QLabel *FrequencyInductanceLabel_2;
    QWidget *tab_2;
    QWidget *tab_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 791, 571));
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        font.setPointSize(12);
        tabWidget->setFont(font);
        Tab_RL_Calc = new QWidget();
        Tab_RL_Calc->setObjectName(QStringLiteral("Tab_RL_Calc"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        Tab_RL_Calc->setFont(font1);
        InductorComboBox = new QComboBox(Tab_RL_Calc);
        InductorComboBox->setObjectName(QStringLiteral("InductorComboBox"));
        InductorComboBox->setGeometry(QRect(180, 80, 51, 41));
        InductorComboBox->setFont(font1);
        InductanceLabel = new QLabel(Tab_RL_Calc);
        InductanceLabel->setObjectName(QStringLiteral("InductanceLabel"));
        InductanceLabel->setGeometry(QRect(60, 50, 111, 31));
        InductanceLabel->setFont(font1);
        FrequencyInductanceLabel = new QLabel(Tab_RL_Calc);
        FrequencyInductanceLabel->setObjectName(QStringLiteral("FrequencyInductanceLabel"));
        FrequencyInductanceLabel->setGeometry(QRect(60, 130, 111, 31));
        FrequencyInductanceLabel->setFont(font1);
        InductorFrequencyComboBox = new QComboBox(Tab_RL_Calc);
        InductorFrequencyComboBox->setObjectName(QStringLiteral("InductorFrequencyComboBox"));
        InductorFrequencyComboBox->setGeometry(QRect(180, 160, 51, 41));
        InductorFrequencyComboBox->setFont(font1);
        InductanceOutput = new QTextBrowser(Tab_RL_Calc);
        InductanceOutput->setObjectName(QStringLiteral("InductanceOutput"));
        InductanceOutput->setGeometry(QRect(250, 80, 131, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(14);
        InductanceOutput->setFont(font2);
        InductanceOutput->setLayoutDirection(Qt::LeftToRight);
        InductorCalcpushButton = new QPushButton(Tab_RL_Calc);
        InductorCalcpushButton->setObjectName(QStringLiteral("InductorCalcpushButton"));
        InductorCalcpushButton->setGeometry(QRect(250, 160, 131, 41));
        InductorCalcpushButton->setFont(font1);
        InductorInductanceEdit = new QLineEdit(Tab_RL_Calc);
        InductorInductanceEdit->setObjectName(QStringLiteral("InductorInductanceEdit"));
        InductorInductanceEdit->setGeometry(QRect(60, 80, 111, 41));
        InductorInductanceEdit->setFont(font2);
        InductorFrequencyEdit = new QLineEdit(Tab_RL_Calc);
        InductorFrequencyEdit->setObjectName(QStringLiteral("InductorFrequencyEdit"));
        InductorFrequencyEdit->setGeometry(QRect(60, 160, 111, 41));
        InductorFrequencyEdit->setFont(font2);
        InductanceLabel_2 = new QLabel(Tab_RL_Calc);
        InductanceLabel_2->setObjectName(QStringLiteral("InductanceLabel_2"));
        InductanceLabel_2->setGeometry(QRect(390, 90, 31, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("AcadEref"));
        font3.setPointSize(24);
        InductanceLabel_2->setFont(font3);
        CapcitanceComboBox = new QComboBox(Tab_RL_Calc);
        CapcitanceComboBox->setObjectName(QStringLiteral("CapcitanceComboBox"));
        CapcitanceComboBox->setGeometry(QRect(180, 260, 51, 41));
        CapcitanceComboBox->setFont(font1);
        CapcitanceFrequencyComboBox = new QComboBox(Tab_RL_Calc);
        CapcitanceFrequencyComboBox->setObjectName(QStringLiteral("CapcitanceFrequencyComboBox"));
        CapcitanceFrequencyComboBox->setGeometry(QRect(180, 340, 51, 41));
        CapcitanceFrequencyComboBox->setFont(font1);
        CapcitorCapcitanceEdit = new QLineEdit(Tab_RL_Calc);
        CapcitorCapcitanceEdit->setObjectName(QStringLiteral("CapcitorCapcitanceEdit"));
        CapcitorCapcitanceEdit->setGeometry(QRect(60, 260, 111, 41));
        CapcitorCapcitanceEdit->setFont(font2);
        CapcitanceCalcpushButton = new QPushButton(Tab_RL_Calc);
        CapcitanceCalcpushButton->setObjectName(QStringLiteral("CapcitanceCalcpushButton"));
        CapcitanceCalcpushButton->setGeometry(QRect(250, 340, 131, 41));
        CapcitanceCalcpushButton->setFont(font1);
        InductanceLabel_3 = new QLabel(Tab_RL_Calc);
        InductanceLabel_3->setObjectName(QStringLiteral("InductanceLabel_3"));
        InductanceLabel_3->setGeometry(QRect(390, 270, 31, 31));
        InductanceLabel_3->setFont(font3);
        CapcitanceOutput = new QTextBrowser(Tab_RL_Calc);
        CapcitanceOutput->setObjectName(QStringLiteral("CapcitanceOutput"));
        CapcitanceOutput->setGeometry(QRect(250, 260, 131, 41));
        CapcitanceOutput->setFont(font2);
        CapcitanceOutput->setLayoutDirection(Qt::LeftToRight);
        InductanceLabel_4 = new QLabel(Tab_RL_Calc);
        InductanceLabel_4->setObjectName(QStringLiteral("InductanceLabel_4"));
        InductanceLabel_4->setGeometry(QRect(60, 230, 111, 31));
        InductanceLabel_4->setFont(font1);
        CapcitorFrequencyEdit = new QLineEdit(Tab_RL_Calc);
        CapcitorFrequencyEdit->setObjectName(QStringLiteral("CapcitorFrequencyEdit"));
        CapcitorFrequencyEdit->setGeometry(QRect(60, 340, 111, 41));
        CapcitorFrequencyEdit->setFont(font2);
        FrequencyInductanceLabel_2 = new QLabel(Tab_RL_Calc);
        FrequencyInductanceLabel_2->setObjectName(QStringLiteral("FrequencyInductanceLabel_2"));
        FrequencyInductanceLabel_2->setGeometry(QRect(60, 310, 111, 31));
        FrequencyInductanceLabel_2->setFont(font1);
        tabWidget->addTab(Tab_RL_Calc, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setFont(font1);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_3->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        InductanceLabel->setText(QApplication::translate("MainWindow", "Inductance", Q_NULLPTR));
        FrequencyInductanceLabel->setText(QApplication::translate("MainWindow", "Frequency", Q_NULLPTR));
        InductorCalcpushButton->setText(QApplication::translate("MainWindow", "Calc", Q_NULLPTR));
        InductanceLabel_2->setText(QApplication::translate("MainWindow", "\316\251", Q_NULLPTR));
        CapcitanceCalcpushButton->setText(QApplication::translate("MainWindow", "Calc", Q_NULLPTR));
        InductanceLabel_3->setText(QApplication::translate("MainWindow", "\316\251", Q_NULLPTR));
        InductanceLabel_4->setText(QApplication::translate("MainWindow", "CapcCapcitance", Q_NULLPTR));
        FrequencyInductanceLabel_2->setText(QApplication::translate("MainWindow", "Frequency", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Tab_RL_Calc), QApplication::translate("MainWindow", "\345\256\271\346\212\227 \346\204\237\346\212\227", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Lc,Rc,LR\350\275\254\346\212\230\351\242\221\347\216\207", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
