/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1240, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1240, 600));
        MainWindow->setMaximumSize(QSize(1240, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/network.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolTipDuration(0);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"background:url(:/images/pink-gradient-white-linear-3840x2160-c2-ffb6c1-ffffff-a-15-f-14.png);\n"
"};"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 180, 651, 271));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/teamwork.svg")));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 40, 601, 121));
        QFont font;
        font.setFamily(QStringLiteral("Karumbi"));
        font.setPointSize(27);
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::NoFrame);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(790, 160, 501, 281));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 510, 151, 41));
        pushButton->setStyleSheet(QLatin1String("  QPushButton{\n"
"    box-shadow:inset 0px 1px 0px 0px #fbafe3;\n"
"	background-color:#ff5bb0;\n"
"	border-radius:17px;\n"
"	border:1px solid #ee1eb5;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Courier New;\n"
"	font-size:15px;\n"
"	font-weight:bold;\n"
"	padding:7px 24px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #c70067;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"background-color:rgb(244, 2, 190);\n"
"\n"
"\n"
"};"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 510, 161, 41));
        pushButton_2->setStyleSheet(QLatin1String("  QPushButton{\n"
"    box-shadow:inset 0px 1px 0px 0px #fbafe3;\n"
"	background-color:#ff5bb0;\n"
"	border-radius:17px;\n"
"	border:1px solid #ee1eb5;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Courier New;\n"
"	font-size:15px;\n"
"	font-weight:bold;\n"
"	padding:7px 24px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #c70067;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"background-color:rgb(239, 41, 41);\n"
"\n"
"\n"
"};"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1240, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SWOOSH", Q_NULLPTR));
        label->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Karumbi'; font-size:27pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Naskh Arabic UI Italic'; font-size:22pt; font-weight:600; color:#2e3436;\">SWOOSH</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Naskh Arabic UI Italic'; font-size:18pt; font-weight:600; color:#2e3436;\">CREATE . CUSTOMISE . ORGANISE</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -"
                        "qt-block-indent:0; text-indent:0px; font-family:'Noto Naskh Arabic UI Italic'; font-size:9pt; font-weight:600; color:#2e3436;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Naskh Arabic UI Italic'; font-size:9pt; font-weight:600; color:#2e3436;\"><br /></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">SWOOSH </span><span style=\" font-size:12pt; color:#3465a4;\">is an intresting way to organize your</span></p><p><span style=\" font-size:12pt; color:#3465a4;\">daily tasks and make your day effective.</span></p><p><span style=\" font-size:12pt; color:#3465a4;\"><br/>MAKE YOUR OWN ORGANIZER</span></p><p><span style=\" font-size:12pt;\">&gt; </span><span style=\" font-size:12pt; font-weight:600;\">CREATE </span><span style=\" font-size:12pt; color:#3465a4;\">priority based task tables</span></p><p><span style=\" font-size:12pt;\">&gt; </span><span style=\" font-size:12pt; font-weight:600;\">UPDATE </span><span style=\" font-size:12pt; color:#3465a4;\">as your Day changes</span></p><p><span style=\" font-size:12pt;\">&gt; </span><span style=\" font-size:12pt; font-weight:600;\">REMOVE </span><span style=\" font-size:12pt; color:#3465a4;\">when done or not needed. </span></p><p><span style=\" font-size:12pt; font-weight:600; color:#3465a4;\">"
                        "Plan your Day . And make it a Happy Day !</span></p><p><span style=\" font-size:12pt;\"><br/></span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "GET IN", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "EXIT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
