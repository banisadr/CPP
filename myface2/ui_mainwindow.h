/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *page_6;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLabel *position;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *email;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *username;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *phone;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *search;
    QPushButton *pushButton_3;
    QLabel *picture;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *location;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *edit;
    QPushButton *logout;
    QWidget *page_7;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *return_profile;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_6;
    QLineEdit *name_edit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLineEdit *pwd_edit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLineEdit *pwd_edit_check;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QLineEdit *phone_edit;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QLineEdit *position_edit;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_16;
    QLineEdit *location_edit;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButton_4;
    QLineEdit *photo_location;
    QPushButton *save;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(638, 456);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_2 = new QVBoxLayout(page_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(page_5);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(page_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(page_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(page_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout = new QGridLayout(page_6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(page_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        position = new QLabel(page_6);
        position->setObjectName(QString::fromUtf8("position"));

        horizontalLayout_5->addWidget(position);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(page_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        email = new QLabel(page_6);
        email->setObjectName(QString::fromUtf8("email"));

        horizontalLayout_6->addWidget(email);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(page_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        username = new QLabel(page_6);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout_3->addWidget(username);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(page_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        phone = new QLabel(page_6);
        phone->setObjectName(QString::fromUtf8("phone"));

        horizontalLayout_4->addWidget(phone);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        search = new QLineEdit(page_6);
        search->setObjectName(QString::fromUtf8("search"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(search);

        pushButton_3 = new QPushButton(page_6);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_9, 8, 1, 1, 1);

        picture = new QLabel(page_6);
        picture->setObjectName(QString::fromUtf8("picture"));

        gridLayout->addWidget(picture, 0, 1, 4, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(page_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        location = new QLabel(page_6);
        location->setObjectName(QString::fromUtf8("location"));

        horizontalLayout_7->addWidget(location);


        gridLayout->addLayout(horizontalLayout_7, 8, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        edit = new QPushButton(page_6);
        edit->setObjectName(QString::fromUtf8("edit"));

        horizontalLayout_11->addWidget(edit);

        logout = new QPushButton(page_6);
        logout->setObjectName(QString::fromUtf8("logout"));

        horizontalLayout_11->addWidget(logout);


        gridLayout->addLayout(horizontalLayout_11, 6, 1, 1, 1);

        stackedWidget->addWidget(page_6);
        label_4->raise();
        username->raise();
        picture->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        phone->raise();
        position->raise();
        email->raise();
        location->raise();
        picture->raise();
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        horizontalLayout_12 = new QHBoxLayout(page_7);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(page_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setPointSize(18);
        label_5->setFont(font1);

        verticalLayout_5->addWidget(label_5);

        scrollArea = new QScrollArea(page_7);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 590, 265));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_5->addWidget(scrollArea);

        return_profile = new QPushButton(page_7);
        return_profile->setObjectName(QString::fromUtf8("return_profile"));

        verticalLayout_5->addWidget(return_profile);


        horizontalLayout_12->addLayout(verticalLayout_5);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        verticalLayout_6 = new QVBoxLayout(page_8);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_17 = new QLabel(page_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font2;
        font2.setPointSize(22);
        label_17->setFont(font2);
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_17);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_6 = new QLabel(page_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_13->addWidget(label_6);

        name_edit = new QLineEdit(page_8);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        horizontalLayout_13->addWidget(name_edit);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_11 = new QLabel(page_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_14->addWidget(label_11);

        pwd_edit = new QLineEdit(page_8);
        pwd_edit->setObjectName(QString::fromUtf8("pwd_edit"));

        horizontalLayout_14->addWidget(pwd_edit);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_12 = new QLabel(page_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_15->addWidget(label_12);

        pwd_edit_check = new QLineEdit(page_8);
        pwd_edit_check->setObjectName(QString::fromUtf8("pwd_edit_check"));

        horizontalLayout_15->addWidget(pwd_edit_check);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_13 = new QLabel(page_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_16->addWidget(label_13);

        phone_edit = new QLineEdit(page_8);
        phone_edit->setObjectName(QString::fromUtf8("phone_edit"));

        horizontalLayout_16->addWidget(phone_edit);


        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_14 = new QLabel(page_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_17->addWidget(label_14);

        position_edit = new QLineEdit(page_8);
        position_edit->setObjectName(QString::fromUtf8("position_edit"));

        horizontalLayout_17->addWidget(position_edit);


        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_15 = new QLabel(page_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_18->addWidget(label_15);

        email_edit = new QLineEdit(page_8);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));

        horizontalLayout_18->addWidget(email_edit);


        verticalLayout_6->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_16 = new QLabel(page_8);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_19->addWidget(label_16);

        location_edit = new QLineEdit(page_8);
        location_edit->setObjectName(QString::fromUtf8("location_edit"));

        horizontalLayout_19->addWidget(location_edit);


        verticalLayout_6->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        pushButton_4 = new QPushButton(page_8);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_20->addWidget(pushButton_4);

        photo_location = new QLineEdit(page_8);
        photo_location->setObjectName(QString::fromUtf8("photo_location"));

        horizontalLayout_20->addWidget(photo_location);


        verticalLayout_6->addLayout(horizontalLayout_20);

        save = new QPushButton(page_8);
        save->setObjectName(QString::fromUtf8("save"));

        verticalLayout_6->addWidget(save);

        stackedWidget->addWidget(page_8);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        stackedWidget->raise();
        stackedWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 638, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(lineEdit_2, SIGNAL(returnPressed()), pushButton, SLOT(click()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MyFace", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Welcome to MyFace", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Username", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Password", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Create New", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Position:", 0, QApplication::UnicodeUTF8));
        position->setText(QApplication::translate("MainWindow", "User Position", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Email:", 0, QApplication::UnicodeUTF8));
        email->setText(QApplication::translate("MainWindow", "User Email", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "YourFace:", 0, QApplication::UnicodeUTF8));
        username->setText(QApplication::translate("MainWindow", "User Name", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Phone #:", 0, QApplication::UnicodeUTF8));
        phone->setText(QApplication::translate("MainWindow", "User Phone #", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        picture->setText(QApplication::translate("MainWindow", "User Picture", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Location:", 0, QApplication::UnicodeUTF8));
        location->setText(QApplication::translate("MainWindow", "User Location", 0, QApplication::UnicodeUTF8));
        edit->setText(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        logout->setText(QApplication::translate("MainWindow", "Logout", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Results:", 0, QApplication::UnicodeUTF8));
        return_profile->setText(QApplication::translate("MainWindow", "Return", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Edit Information", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Username:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Password:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Re-enter Password:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Phone Number:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Position:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Email:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Location:", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Select Photo", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
