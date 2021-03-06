#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFile>
#include <QDesktopServices>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_actionBold_Unbold_Ctrl_b_triggered(bool checked);

    void on_actionSuperScript_triggered(bool checked);

    void on_actionSubScript_triggered(bool checked);

    void on_actionCV_triggered();

    void on_actionPicture_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
