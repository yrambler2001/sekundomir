/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWUI_H
#define MAINWINDOWUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *startStopButton;
    QPushButton *resetButton;
    QTextEdit *secondsText;
    QLabel *label_2;
    QTextEdit *hundredthsText;
    QTextEdit *minutesText;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(269, 86);
        MainWindow->setMinimumSize(QSize(269, 86));
        MainWindow->setMaximumSize(QSize(269, 86));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 0, 21, 51));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        startStopButton = new QPushButton(centralWidget);
        startStopButton->setObjectName(QString::fromUtf8("startStopButton"));
        startStopButton->setGeometry(QRect(180, 0, 81, 23));
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(180, 30, 81, 23));
        secondsText = new QTextEdit(centralWidget);
        secondsText->setObjectName(QString::fromUtf8("secondsText"));
        secondsText->setGeometry(QRect(70, 10, 41, 41));
        QFont font1;
        font1.setPointSize(20);
        secondsText->setFont(font1);
        secondsText->setStyleSheet(QString::fromUtf8("border: 0;"));
        secondsText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        secondsText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        secondsText->setReadOnly(true);
        secondsText->setAcceptRichText(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 0, 21, 51));
        label_2->setFont(font);
        hundredthsText = new QTextEdit(centralWidget);
        hundredthsText->setObjectName(QString::fromUtf8("hundredthsText"));
        hundredthsText->setGeometry(QRect(130, 10, 41, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hundredthsText->sizePolicy().hasHeightForWidth());
        hundredthsText->setSizePolicy(sizePolicy);
        hundredthsText->setFont(font1);
        hundredthsText->setStyleSheet(QString::fromUtf8("border: 0;"));
        hundredthsText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hundredthsText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hundredthsText->setUndoRedoEnabled(true);
        hundredthsText->setLineWrapMode(QTextEdit::NoWrap);
        hundredthsText->setReadOnly(true);
        hundredthsText->setTabStopWidth(80);
        hundredthsText->setAcceptRichText(false);
        hundredthsText->setCursorWidth(1);
        minutesText = new QTextEdit(centralWidget);
        minutesText->setObjectName(QString::fromUtf8("minutesText"));
        minutesText->setGeometry(QRect(10, 10, 41, 41));
        minutesText->setFont(font1);
        minutesText->setStyleSheet(QString::fromUtf8("border: 0;"));
        minutesText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minutesText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minutesText->setReadOnly(true);
        minutesText->setAcceptRichText(false);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\241\320\265\320\272\321\203\320\275\320\264\320\276\320\274\321\226\321\200", nullptr));
        label->setText(QApplication::translate("MainWindow", ":", nullptr));
        startStopButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\207\320\260\321\202\320\270", nullptr));
        resetButton->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\270\320\275\321\203\321\202\320\270", nullptr));
        secondsText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">00</span></p></body></html>", nullptr));
        secondsText->setPlaceholderText(QApplication::translate("MainWindow", "00", nullptr));
        label_2->setText(QApplication::translate("MainWindow", ":", nullptr));
        hundredthsText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">00</span></p></body></html>", nullptr));
        hundredthsText->setPlaceholderText(QApplication::translate("MainWindow", "00", nullptr));
        minutesText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">00</span></p></body></html>", nullptr));
        minutesText->setPlaceholderText(QApplication::translate("MainWindow", "00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWUI_H
