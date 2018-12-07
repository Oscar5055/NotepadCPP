/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setWindowIcon(icon);
        label = new QLabel(about);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 130, 351, 41));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(about);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 240, 161, 51));
        label_2->setWordWrap(true);
        label_3 = new QLabel(about);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 260, 71, 21));
        label_4 = new QLabel(about);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 360, 100));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/OskarLabel.png")));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", nullptr));
        label->setText(QApplication::translate("about", "NotepadCPP, made in C++ language and used QT framework, is made as a training project. Bugs are expected in this application, if you find any please contact me.", nullptr));
        label_2->setText(QApplication::translate("about", "Oskar Trochimowicz oscar5055@windowslive.com", nullptr));
        label_3->setText(QApplication::translate("about", "Thank you! <3", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
