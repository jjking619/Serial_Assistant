/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLabel *label;
    QComboBox *serialCb;
    QLabel *label_2;
    QComboBox *baundrateCb;
    QLabel *label_3;
    QComboBox *databitCb;
    QLabel *label_4;
    QComboBox *stopbitCb;
    QLabel *label_5;
    QComboBox *checkbitCb;
    QPushButton *btnSerialCheck;
    QPushButton *openBt;
    QGridLayout *gridLayout;
    QPlainTextEdit *recvEdit;
    QTextEdit *sendEdit;
    QPushButton *sendBt;
    QPushButton *btnClearSend;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QPushButton *clearBt;
    QCheckBox *chk_rev_hex;
    QCheckBox *chk_rev_time;
    QCheckBox *chk_rev_line;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QCheckBox *chk_send_hex;
    QCheckBox *chk_send_line;
    QCheckBox *chkTimSend;
    QHBoxLayout *horizontalLayout;
    QSpinBox *txtSendMs;
    QLabel *label_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(799, 593);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(5, 10, 781, 571));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setObjectName("formLayout_3");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        serialCb = new QComboBox(groupBox);
        serialCb->setObjectName("serialCb");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, serialCb);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_2);

        baundrateCb = new QComboBox(groupBox);
        baundrateCb->addItem(QString());
        baundrateCb->addItem(QString());
        baundrateCb->addItem(QString());
        baundrateCb->addItem(QString());
        baundrateCb->addItem(QString());
        baundrateCb->addItem(QString());
        baundrateCb->addItem(QString());
        baundrateCb->addItem(QString());
        baundrateCb->setObjectName("baundrateCb");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, baundrateCb);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_3);

        databitCb = new QComboBox(groupBox);
        databitCb->addItem(QString());
        databitCb->addItem(QString());
        databitCb->addItem(QString());
        databitCb->addItem(QString());
        databitCb->setObjectName("databitCb");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, databitCb);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_4);

        stopbitCb = new QComboBox(groupBox);
        stopbitCb->addItem(QString());
        stopbitCb->addItem(QString());
        stopbitCb->addItem(QString());
        stopbitCb->setObjectName("stopbitCb");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, stopbitCb);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_5);

        checkbitCb = new QComboBox(groupBox);
        checkbitCb->addItem(QString());
        checkbitCb->addItem(QString());
        checkbitCb->addItem(QString());
        checkbitCb->setObjectName("checkbitCb");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, checkbitCb);

        btnSerialCheck = new QPushButton(groupBox);
        btnSerialCheck->setObjectName("btnSerialCheck");

        formLayout_3->setWidget(5, QFormLayout::SpanningRole, btnSerialCheck);

        openBt = new QPushButton(groupBox);
        openBt->setObjectName("openBt");

        formLayout_3->setWidget(6, QFormLayout::SpanningRole, openBt);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        recvEdit = new QPlainTextEdit(widget);
        recvEdit->setObjectName("recvEdit");
        recvEdit->setReadOnly(true);

        gridLayout->addWidget(recvEdit, 0, 0, 1, 2);

        sendEdit = new QTextEdit(widget);
        sendEdit->setObjectName("sendEdit");

        gridLayout->addWidget(sendEdit, 1, 0, 2, 1);

        sendBt = new QPushButton(widget);
        sendBt->setObjectName("sendBt");

        gridLayout->addWidget(sendBt, 1, 1, 1, 1);

        btnClearSend = new QPushButton(widget);
        btnClearSend->setObjectName("btnClearSend");

        gridLayout->addWidget(btnClearSend, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 3, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName("formLayout");
        clearBt = new QPushButton(groupBox_2);
        clearBt->setObjectName("clearBt");

        formLayout->setWidget(0, QFormLayout::LabelRole, clearBt);

        chk_rev_hex = new QCheckBox(groupBox_2);
        chk_rev_hex->setObjectName("chk_rev_hex");

        formLayout->setWidget(0, QFormLayout::FieldRole, chk_rev_hex);

        chk_rev_time = new QCheckBox(groupBox_2);
        chk_rev_time->setObjectName("chk_rev_time");

        formLayout->setWidget(1, QFormLayout::LabelRole, chk_rev_time);

        chk_rev_line = new QCheckBox(groupBox_2);
        chk_rev_line->setObjectName("chk_rev_line");

        formLayout->setWidget(1, QFormLayout::FieldRole, chk_rev_line);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setObjectName("formLayout_2");
        chk_send_hex = new QCheckBox(groupBox_3);
        chk_send_hex->setObjectName("chk_send_hex");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, chk_send_hex);

        chk_send_line = new QCheckBox(groupBox_3);
        chk_send_line->setObjectName("chk_send_line");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, chk_send_line);

        chkTimSend = new QCheckBox(groupBox_3);
        chkTimSend->setObjectName("chkTimSend");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, chkTimSend);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txtSendMs = new QSpinBox(groupBox_3);
        txtSendMs->setObjectName("txtSendMs");
        txtSendMs->setMaximum(10000);

        horizontalLayout->addWidget(txtSendMs);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        baundrateCb->setCurrentIndex(3);
        databitCb->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        baundrateCb->setItemText(0, QCoreApplication::translate("MainWindow", "1200", nullptr));
        baundrateCb->setItemText(1, QCoreApplication::translate("MainWindow", "2400", nullptr));
        baundrateCb->setItemText(2, QCoreApplication::translate("MainWindow", "4800", nullptr));
        baundrateCb->setItemText(3, QCoreApplication::translate("MainWindow", "9600", nullptr));
        baundrateCb->setItemText(4, QCoreApplication::translate("MainWindow", "19200", nullptr));
        baundrateCb->setItemText(5, QCoreApplication::translate("MainWindow", "38400", nullptr));
        baundrateCb->setItemText(6, QCoreApplication::translate("MainWindow", "57600", nullptr));
        baundrateCb->setItemText(7, QCoreApplication::translate("MainWindow", "115200", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        databitCb->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        databitCb->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        databitCb->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        databitCb->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        stopbitCb->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        stopbitCb->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        stopbitCb->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        checkbitCb->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        checkbitCb->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", nullptr));
        checkbitCb->setItemText(2, QCoreApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", nullptr));

        btnSerialCheck->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\344\270\262\345\217\243", nullptr));
        openBt->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        sendBt->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        btnClearSend->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        clearBt->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        chk_rev_hex->setText(QCoreApplication::translate("MainWindow", "Hex\346\216\245\346\224\266", nullptr));
        chk_rev_time->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264\346\210\263", nullptr));
        chk_rev_line->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        chk_send_hex->setText(QCoreApplication::translate("MainWindow", "Hex\345\217\221\351\200\201", nullptr));
        chk_send_line->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        chkTimSend->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\345\217\221\351\200\201", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
