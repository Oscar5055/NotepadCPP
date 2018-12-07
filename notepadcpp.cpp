#include "notepadcpp.h"
#include "ui_notepadcpp.h"
#include "about.h"

NotepadCPP::NotepadCPP(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotepadCPP)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit); //textedit adjust to screen
}

NotepadCPP::~NotepadCPP()
{
    delete ui;
}

void NotepadCPP::on_actionNew_triggered()
{
    currentFile.clear(); //makes space for new file
    ui->textEdit->setText(QString());
}

void NotepadCPP::on_actionOpen_2_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open file: ", "" , "Text Files (*.txt);;All Files (*.*)");
    QFile file(filename);
    currentFile = filename;

    //if the file cannot be opened
    if(!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox msgBox;
        msgBox.setText("Error. File cannot be opened!");
        return;
    }
    //file to notepad
    setStatusTip(filename+" -Made w/ <3 By Oskar Trochimowicz-"); //shows on bottom bar file name
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();


}

void NotepadCPP::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save as: ", "" , "Text Files (*.txt);;All Files (*.*)");
    QFile file(filename);

    //if the file cannot be saved
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox msgBox;
        msgBox.setText("Error. File cannot be saved!");
        return;
    }

    currentFile = filename;
    setStatusTip(filename+" -Made w/ <3 By Oskar Trochimowicz-");
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();

}

void NotepadCPP::on_actionPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer");
    QPrintDialog pDialog(&printer, this);

    //if file cannot be printed
    if(pDialog.exec() == QDialog::Rejected)
    {
        QMessageBox msgBox;
        msgBox.setText("Error. Printer unavailable!");
        return;
    }
    ui->textEdit->print(&printer);

}

void NotepadCPP::on_actionFonts_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
}


void NotepadCPP::on_actionExit_triggered()
{
    QApplication::quit();
}

void NotepadCPP::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void NotepadCPP::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void NotepadCPP::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void NotepadCPP::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void NotepadCPP::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}



void NotepadCPP::on_actionAbout_NotepadCPP_triggered()
{
    about opensecond;
    opensecond.setModal(true);
    opensecond.exec();
}
