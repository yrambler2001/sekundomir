#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sekundomir.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void startStopTimer();
    void resetTimer();
    void update();

signals:

private:
    Ui::MainWindow *ui;
    Sekundomir* watch;
};

#endif // MAINWINDOW_H
