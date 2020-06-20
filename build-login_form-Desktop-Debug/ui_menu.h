/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QGroupBox *groupBox;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QVBoxLayout *buttonlayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *update;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QHBoxLayout *showBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_9;
    QGroupBox *groupBox_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_10;
    QTableView *tableView;
    QGroupBox *addbox;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_7;
    QLabel *label_12;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(1240, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menu->sizePolicy().hasHeightForWidth());
        menu->setSizePolicy(sizePolicy);
        menu->setMinimumSize(QSize(1240, 600));
        menu->setMaximumSize(QSize(1240, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/network.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setWindowIcon(icon);
        menu->setToolTipDuration(0);
        menu->setStyleSheet(QStringLiteral("background-image:url(:/images/pink-gradient-white-linear-3840x2160-c2-ffb6c1-ffffff-a-15-f-14.png)"));
        groupBox = new QGroupBox(menu);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-1, -1, 171, 601));
        groupBox->setStyleSheet(QStringLiteral("background:rgb(0, 0, 0);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 151, 191));
        label_5->setMinimumSize(QSize(10, 25));
        label_5->setStyleSheet(QStringLiteral("background:rgb(0, 0, 0);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/Thanksgiving-33-512_151x151.png")));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 550, 151, 41));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
"background:rgb(164, 0, 0);\n"
"	border-radius:17px;\n"
"	border:1px solid ;\n"
"	display:inline-block;\n"
"color:rgb(238, 238, 236);\n"
"font-family:Courier New;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"padding:7px 24px;\n"
"text-decoration:none;\n"
"text-shadow:0px 1px 0px #c70067;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgb(239, 41, 41);\n"
"\n"
"}\n"
""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 270, 161, 227));
        buttonlayout = new QVBoxLayout(layoutWidget);
        buttonlayout->setSpacing(18);
        buttonlayout->setObjectName(QStringLiteral("buttonlayout"));
        buttonlayout->setContentsMargins(2, 5, 2, 5);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"background:rgb(0, 0, 0);\n"
"	border-radius:17px;\n"
"	border:1px solid ;\n"
"	display:inline-block;\n"
"color:rgb(238, 238, 236);\n"
"font-family:Courier New;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"padding:7px 24px;\n"
"text-decoration:none;\n"
"text-shadow:0px 1px 0px #c70067;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgb(85, 87, 83);\n"
"\n"
"}\n"
"QPushButton:clicked{\n"
"background:rgb(85, 87, 83);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/graph.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(24, 26));

        buttonlayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"background:rgb(0, 0, 0);\n"
"	border-radius:17px;\n"
"	border:1px solid ;\n"
"	display:inline-block;\n"
"color:rgb(238, 238, 236);\n"
"font-family:Courier New;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"padding:7px 24px;\n"
"text-decoration:none;\n"
"text-shadow:0px 1px 0px #c70067;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgb(85, 87, 83);\n"
"\n"
"}\n"
"QPushButton:clicked{\n"
"background:rgb(85, 87, 83);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/mathematics.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(25, 23));
        pushButton_4->setFlat(false);

        buttonlayout->addWidget(pushButton_4);

        update = new QPushButton(layoutWidget);
        update->setObjectName(QStringLiteral("update"));
        sizePolicy1.setHeightForWidth(update->sizePolicy().hasHeightForWidth());
        update->setSizePolicy(sizePolicy1);
        update->setStyleSheet(QLatin1String("QPushButton{\n"
"background:rgb(0, 0, 0);\n"
"	border-radius:17px;\n"
"	border:1px solid ;\n"
"	display:inline-block;\n"
"color:rgb(238, 238, 236);\n"
"font-family:Courier New;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"padding:7px 24px;\n"
"text-decoration:none;\n"
"text-shadow:0px 1px 0px #c70067;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgb(85, 87, 83);\n"
"\n"
"}\n"
"QPushButton:clicked{\n"
"background:rgb(85, 87, 83);\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        update->setIcon(icon3);
        update->setIconSize(QSize(24, 22));

        buttonlayout->addWidget(update);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background:rgb(0, 0, 0);\n"
"	border-radius:17px;\n"
"	border:1px solid ;\n"
"	display:inline-block;\n"
"color:rgb(238, 238, 236);\n"
"font-family:Courier New;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"padding:7px 24px;\n"
"text-decoration:none;\n"
"text-shadow:0px 1px 0px #c70067;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgb(85, 87, 83);\n"
"\n"
"}\n"
"QPushButton:clicked{\n"
"background:rgb(85, 87, 83);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(22, 25));

        buttonlayout->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(menu);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 10, 1051, 191));
        showBox = new QHBoxLayout(layoutWidget1);
        showBox->setSpacing(15);
        showBox->setObjectName(QStringLiteral("showBox"));
        showBox->setContentsMargins(2, 2, 2, 2);
        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("background:rgb(204, 0, 0);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 321, 51));
        label->setStyleSheet(QStringLiteral(""));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 60, 121, 121));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/unnamed_121x111.png")));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 70, 191, 101));
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setStyleSheet(QLatin1String("font: 75 56pt \"DejaVu Sans\";\n"
"font-weight:bold;\n"
"color:rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignCenter);

        showBox->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QStringLiteral("background:rgb(64, 103, 191)"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 321, 51));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 60, 121, 121));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/things-already-done-23a776c71d9ec435984843b7c43103f8_121x111.png")));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 80, 191, 101));
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setStyleSheet(QLatin1String("font: 75 56pt \"DejaVu Sans\";\n"
"font-weight:bold;\n"
"color:rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);

        showBox->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(layoutWidget1);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QStringLiteral("background:rgb(115, 210, 22)"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 0, 331, 51));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 70, 121, 121));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/-png-_121x111.png")));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 80, 191, 101));
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setStyleSheet(QLatin1String("font: 75 56pt \"DejaVu Sans\";\n"
"font-weight:bold;\n"
"color:rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);

        showBox->addWidget(groupBox_4);

        tableView = new QTableView(menu);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(180, 210, 1051, 381));
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setStyleSheet(QLatin1String("font: 75 11pt \"Liberation Sans\";\n"
"\n"
"QTableView::item:focus{\n"
"selection-background:rgb(186, 189, 182)\n"
"}"));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setFrameShadow(QFrame::Raised);
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setGridStyle(Qt::CustomDashLine);
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setDefaultSectionSize(375);
        tableView->horizontalHeader()->setMinimumSectionSize(150);
        tableView->horizontalHeader()->setStretchLastSection(true);
        addbox = new QGroupBox(menu);
        addbox->setObjectName(QStringLiteral("addbox"));
        addbox->setGeometry(QRect(180, 210, 1051, 381));
        addbox->setStyleSheet(QLatin1String("font: 75 14pt \"DejaVu Sans Mono\";\n"
"color:rgb(238, 238, 236);\n"
"background:rgb(0, 0, 0);"));
        label_11 = new QLabel(addbox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(300, 40, 461, 71));
        label_11->setStyleSheet(QStringLiteral(""));
        label_13 = new QLabel(addbox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(280, 140, 181, 31));
        label_13->setStyleSheet(QStringLiteral(""));
        label_14 = new QLabel(addbox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 200, 181, 31));
        label_14->setStyleSheet(QStringLiteral(""));
        label_15 = new QLabel(addbox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(280, 260, 181, 31));
        label_15->setStyleSheet(QStringLiteral(""));
        lineEdit_2 = new QLineEdit(addbox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(520, 140, 281, 31));
        lineEdit_2->setToolTipDuration(2);
        lineEdit_2->setStyleSheet(QLatin1String("background:rgb(211, 215, 207);\n"
"color:rgb(0, 0, 0);"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(addbox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(520, 200, 281, 31));
        lineEdit_3->setStyleSheet(QLatin1String("background:rgb(211, 215, 207);\n"
"color:rgb(0, 0, 0);"));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_4 = new QLineEdit(addbox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(520, 260, 281, 31));
        lineEdit_4->setStyleSheet(QLatin1String("background:rgb(211, 215, 207);\n"
"color:rgb(0, 0, 0);"));
        lineEdit_4->setAlignment(Qt::AlignCenter);
        pushButton_7 = new QPushButton(addbox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(450, 330, 151, 41));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"background:rgb(14, 111, 249);\n"
"	border-radius:17px;\n"
"	border:1px solid ;\n"
"	display:inline-block;\n"
"color:rgb(238, 238, 236);\n"
"font-family:Courier New;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"padding:7px 24px;\n"
"text-decoration:none;\n"
"text-shadow:0px 1px 0px #c70067;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgb(113, 194, 247);\n"
"\n"
"}\n"
""));
        label_12 = new QLabel(addbox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 180, 181, 51));

        retranslateUi(menu);
        QObject::connect(pushButton_6, SIGNAL(clicked()), menu, SLOT(close()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), addbox, SLOT(show()));

        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "MENU", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_5->setText(QString());
        pushButton_6->setText(QApplication::translate("menu", "EXIT", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("menu", "Search", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("menu", "Create", Q_NULLPTR));
        update->setText(QApplication::translate("menu", "Update", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("menu", "Remove", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("menu", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#eeeeec;\">PENDING TASKS</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QString());
        label_8->setText(QString());
        groupBox_3->setTitle(QString());
        label_2->setText(QApplication::translate("menu", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#eeeeec;\">MUST COMPLETE TASKS</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QString());
        label_9->setText(QString());
        groupBox_4->setTitle(QString());
        label_3->setText(QApplication::translate("menu", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#eeeeec;\">COMPLETED TASKS</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QString());
        label_10->setText(QString());
        addbox->setTitle(QApplication::translate("menu", "ADD TASK", Q_NULLPTR));
        label_11->setText(QApplication::translate("menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">FILL THE TASK DETAILS</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">NAME</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">PRIORITY</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">TASK STATUS</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("menu", "NAME", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("menu", "HIGH LOW MEDIUM", Q_NULLPTR));
        lineEdit_4->setPlaceholderText(QApplication::translate("menu", "0-UNFINISHED  1-FINISHED", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("menu", "ADD", Q_NULLPTR));
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
