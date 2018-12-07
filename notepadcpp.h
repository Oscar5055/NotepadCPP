#ifndef NOTEPADCPP_H
#define NOTEPADCPP_H

#include <QMainWindow>
#include <QTextStream>
#include <QFile>
#include <QFileDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QMessageBox>
#include <QFontDialog>
#include <QFont>


namespace Ui {
class NotepadCPP;
}

class NotepadCPP : public QMainWindow
{
    Q_OBJECT

public:
    explicit NotepadCPP(QWidget *parent = nullptr);
    ~NotepadCPP();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_2_triggered();

    void on_actionSave_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionFonts_triggered();

    void on_actionAbout_NotepadCPP_triggered();

private:
    Ui::NotepadCPP *ui;
    QString currentFile = ""; //hold current file name
};

#endif // NOTEPADCPP_H
