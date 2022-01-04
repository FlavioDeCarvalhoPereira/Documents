/********************************************************************************
** Form generated from reading UI file 'ClientWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/BoardWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_msg;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radio_one_player;
    QRadioButton *radio_multi_player;
    QFrame *frame_difficulty;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QRadioButton *radio_difficulty_easy;
    QRadioButton *radio_difficulty_medium;
    QRadioButton *radio_difficulty_hard;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_start;
    QPushButton *button_connect;
    QPushButton *button_close_connection;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    BoardWidget *board_widget;
    QPlainTextEdit *output;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName(QString::fromUtf8("ClientWindow"));
        ClientWindow->resize(457, 387);
        centralWidget = new QWidget(ClientWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_msg = new QLabel(centralWidget);
        label_msg->setObjectName(QString::fromUtf8("label_msg"));
        label_msg->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_msg);

        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        radio_one_player = new QRadioButton(frame_3);
        radio_one_player->setObjectName(QString::fromUtf8("radio_one_player"));
        radio_one_player->setChecked(true);

        horizontalLayout_2->addWidget(radio_one_player);

        radio_multi_player = new QRadioButton(frame_3);
        radio_multi_player->setObjectName(QString::fromUtf8("radio_multi_player"));

        horizontalLayout_2->addWidget(radio_multi_player);


        horizontalLayout_4->addWidget(frame_3);

        frame_difficulty = new QFrame(frame_4);
        frame_difficulty->setObjectName(QString::fromUtf8("frame_difficulty"));
        sizePolicy.setHeightForWidth(frame_difficulty->sizePolicy().hasHeightForWidth());
        frame_difficulty->setSizePolicy(sizePolicy);
        frame_difficulty->setFrameShape(QFrame::StyledPanel);
        frame_difficulty->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_difficulty);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, 3, 3, 3);
        label_2 = new QLabel(frame_difficulty);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        radio_difficulty_easy = new QRadioButton(frame_difficulty);
        radio_difficulty_easy->setObjectName(QString::fromUtf8("radio_difficulty_easy"));

        horizontalLayout_3->addWidget(radio_difficulty_easy);

        radio_difficulty_medium = new QRadioButton(frame_difficulty);
        radio_difficulty_medium->setObjectName(QString::fromUtf8("radio_difficulty_medium"));
        radio_difficulty_medium->setChecked(true);

        horizontalLayout_3->addWidget(radio_difficulty_medium);

        radio_difficulty_hard = new QRadioButton(frame_difficulty);
        radio_difficulty_hard->setObjectName(QString::fromUtf8("radio_difficulty_hard"));

        horizontalLayout_3->addWidget(radio_difficulty_hard);


        horizontalLayout_4->addWidget(frame_difficulty);


        verticalLayout->addWidget(frame_4);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        button_start = new QPushButton(frame_2);
        button_start->setObjectName(QString::fromUtf8("button_start"));

        horizontalLayout->addWidget(button_start);

        button_connect = new QPushButton(frame_2);
        button_connect->setObjectName(QString::fromUtf8("button_connect"));

        horizontalLayout->addWidget(button_connect);

        button_close_connection = new QPushButton(frame_2);
        button_close_connection->setObjectName(QString::fromUtf8("button_close_connection"));

        horizontalLayout->addWidget(button_close_connection);


        verticalLayout->addWidget(frame_2);

        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(4);
        sizePolicy1.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy1);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(3, 3, 3, 3);
        board_widget = new BoardWidget(frame_5);
        board_widget->setObjectName(QString::fromUtf8("board_widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(4);
        sizePolicy2.setHeightForWidth(board_widget->sizePolicy().hasHeightForWidth());
        board_widget->setSizePolicy(sizePolicy2);
        board_widget->setMinimumSize(QSize(200, 172));

        horizontalLayout_5->addWidget(board_widget);

        output = new QPlainTextEdit(frame_5);
        output->setObjectName(QString::fromUtf8("output"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(4);
        sizePolicy3.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(output);


        verticalLayout->addWidget(frame_5);

        ClientWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ClientWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 457, 22));
        ClientWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ClientWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ClientWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ClientWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ClientWindow->setStatusBar(statusBar);

        retranslateUi(ClientWindow);

        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ClientWindow", "Tic-Tac-Toe", nullptr));
        label_msg->setText(QCoreApplication::translate("ClientWindow", "Press Start to begin", nullptr));
        radio_one_player->setText(QCoreApplication::translate("ClientWindow", "1 Player", nullptr));
        radio_multi_player->setText(QCoreApplication::translate("ClientWindow", "Multi-Player", nullptr));
        label_2->setText(QCoreApplication::translate("ClientWindow", "Difficulty:", nullptr));
        radio_difficulty_easy->setText(QCoreApplication::translate("ClientWindow", "Easy", nullptr));
        radio_difficulty_medium->setText(QCoreApplication::translate("ClientWindow", "Medium", nullptr));
        radio_difficulty_hard->setText(QCoreApplication::translate("ClientWindow", "Hard", nullptr));
        button_start->setText(QCoreApplication::translate("ClientWindow", "Start", nullptr));
        button_connect->setText(QCoreApplication::translate("ClientWindow", "Connect", nullptr));
        button_close_connection->setText(QCoreApplication::translate("ClientWindow", "Close Connection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
