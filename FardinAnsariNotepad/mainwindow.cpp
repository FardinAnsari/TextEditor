#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_actionBold_Unbold_Ctrl_b_triggered(bool checked)
{
    checked? ui->textEdit->setFontWeight(QFont::Bold):
             ui->textEdit->setFontWeight(QFont::Normal);
}


void MainWindow::on_actionSuperScript_triggered(bool checked)
{
    QString text = ui->textEdit->toPlainText();
    QString text_selected = ui->textEdit->textCursor().selectedText();
    qint32 Start = ui->textEdit->textCursor().selectionStart();
    ui->textEdit->textCursor().removeSelectedText();
    QString text_left = ui->textEdit->toPlainText();
    text_left.insert(Start,"<sup>"+ text_selected +"</sup>");
    checked? ui->textEdit->setText(text_left):
             ui->textEdit->setText(text);
}

void MainWindow::on_actionSubScript_triggered(bool checked)
{
    QString text = ui->textEdit->toPlainText();
    QString text_selected = ui->textEdit->textCursor().selectedText();
    qint32 Start = ui->textEdit->textCursor().selectionStart();
    ui->textEdit->textCursor().removeSelectedText();
    QString text_left = ui->textEdit->toPlainText();
    text_left.insert(Start,"<sub>"+ text_selected +"</sub>");
    checked? ui->textEdit->setText(text_left):
             ui->textEdit->setText(text);
}


void MainWindow::on_actionCV_triggered()
{
    QString text = "kindly change the directory to your current project directory in mainwindows.cpp under on_actionCV_triggered()... if already done kindly Ignore";
    ui->textEdit->setText(text);
    QDesktopServices::openUrl(QUrl("file:///D:/QT projects/FardinAnsariNotepad/IIITN_CSE_FARDIN_ANSARI_CV.pdf", QUrl::TolerantMode));
}

void MainWindow::on_actionPicture_triggered()
{
    QString text = "kindly change the directory to your current project directory in mainwindows.cpp under on_actionPicture_triggered()... if already done kindly Ignore";
    ui->textEdit->setText(text);
    QDesktopServices::openUrl(QUrl("file:///D:/QT projects/FardinAnsariNotepad/formal pic.jpg", QUrl::TolerantMode));
}
