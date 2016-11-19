#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::newtext(QString text)  //Übergibt einen string als Variable und schreibt ihn ins lineEdit
{
    ui->lineEdit->setText(text);
}

void MainWindow::addtomemo(QString text)    //Hängt den string an das textEdit (Memo) Fenster unten an
{
    ui->textEdit->append(text);
}

void MainWindow::AddEditToMemo()        //Hängt den Text aus dem LineEdit ans Memo an
{
    ui->textEdit->append(ui->lineEdit->text());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()    //Wenn der Button geklickt wird
{
    AddEditToMemo();                        //oben deklariert
    ui->pushButton->setText("Klick mich nochmal");  //Ändert die Caption des Buttons
}
