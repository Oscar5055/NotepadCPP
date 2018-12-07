/********************************************************************************
** Form generated from reading UI file 'notepadcpp.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPADCPP_H
#define UI_NOTEPADCPP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotepadCPP
{
public:
    QAction *actionNew;
    QAction *actionOpen_2;
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAbout_NotepadCPP;
    QAction *actionFonts;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuStyle;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotepadCPP)
    {
        if (NotepadCPP->objectName().isEmpty())
            NotepadCPP->setObjectName(QStringLiteral("NotepadCPP"));
        NotepadCPP->resize(854, 485);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        NotepadCPP->setWindowIcon(icon);
        actionNew = new QAction(NotepadCPP);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen_2 = new QAction(NotepadCPP);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        actionOpen_2->setIcon(icon);
        actionSave = new QAction(NotepadCPP);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionPrint = new QAction(NotepadCPP);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionExit = new QAction(NotepadCPP);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionCopy = new QAction(NotepadCPP);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(NotepadCPP);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionCut = new QAction(NotepadCPP);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionUndo = new QAction(NotepadCPP);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(NotepadCPP);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionAbout_NotepadCPP = new QAction(NotepadCPP);
        actionAbout_NotepadCPP->setObjectName(QStringLiteral("actionAbout_NotepadCPP"));
        actionFonts = new QAction(NotepadCPP);
        actionFonts->setObjectName(QStringLiteral("actionFonts"));
        centralWidget = new QWidget(NotepadCPP);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 391, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        NotepadCPP->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotepadCPP);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 854, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuStyle = new QMenu(menuBar);
        menuStyle->setObjectName(QStringLiteral("menuStyle"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        NotepadCPP->setMenuBar(menuBar);
        statusBar = new QStatusBar(NotepadCPP);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NotepadCPP->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuStyle->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuStyle->addAction(actionFonts);
        menuAbout->addAction(actionAbout_NotepadCPP);

        retranslateUi(NotepadCPP);

        QMetaObject::connectSlotsByName(NotepadCPP);
    } // setupUi

    void retranslateUi(QMainWindow *NotepadCPP)
    {
        NotepadCPP->setWindowTitle(QApplication::translate("NotepadCPP", "NotepadCPP", nullptr));
        actionNew->setText(QApplication::translate("NotepadCPP", "&New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("NotepadCPP", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen_2->setText(QApplication::translate("NotepadCPP", "&Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen_2->setShortcut(QApplication::translate("NotepadCPP", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("NotepadCPP", "&Save As", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("NotepadCPP", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionPrint->setText(QApplication::translate("NotepadCPP", "&Print", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPrint->setShortcut(QApplication::translate("NotepadCPP", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("NotepadCPP", "&Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("NotepadCPP", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("NotepadCPP", "Copy", nullptr));
        actionPaste->setText(QApplication::translate("NotepadCPP", "Paste", nullptr));
        actionCut->setText(QApplication::translate("NotepadCPP", "Cut", nullptr));
        actionUndo->setText(QApplication::translate("NotepadCPP", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("NotepadCPP", "Redo", nullptr));
        actionAbout_NotepadCPP->setText(QApplication::translate("NotepadCPP", "About NotepadCPP", nullptr));
        actionFonts->setText(QApplication::translate("NotepadCPP", "Fonts", nullptr));
        menuFile->setTitle(QApplication::translate("NotepadCPP", "&File", nullptr));
        menuEdit->setTitle(QApplication::translate("NotepadCPP", "Edit", nullptr));
        menuStyle->setTitle(QApplication::translate("NotepadCPP", "Style", nullptr));
        menuAbout->setTitle(QApplication::translate("NotepadCPP", "Help", nullptr));
#ifndef QT_NO_STATUSTIP
        statusBar->setStatusTip(QApplication::translate("NotepadCPP", "Made w/ <3 by Oskar Trochimowicz", nullptr));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class NotepadCPP: public Ui_NotepadCPP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPADCPP_H
