#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void newtext(QString text);     //Public können auch aus der Main angesteuert werden
    void addtomemo(QString text);   //Hier sind die Prototypen. In der mainwindow.ccp wird definiert was sie machen sollen

private slots:
    void on_pushButton_clicked();   //Wird erzeugt wenn ich den slot im FormEditor anwähle

private:
    Ui::MainWindow *ui;
    void AddEditToMemo();   //Private kann nur von innerhalb MainWindows aufgerufen werden, zb durch einen Button

};

#endif // MAINWINDOW_H
