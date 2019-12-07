#include "mainwindow.h"
#include "mainwindowui.h"
#include <QPushButton>
#include <QPlainTextEdit>
#include <QTime>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    watch(new Sekundomir())
{
    ui->setupUi(this);

    QObject::connect(ui->startStopButton, &QPushButton::clicked,
                     this, &MainWindow::startStopTimer);
    QObject::connect(ui->resetButton, &QPushButton::clicked,
                     this, &MainWindow::resetTimer);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(10);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete watch;
}

void MainWindow::startStopTimer() {
    if(watch->isRunning()) {
        ui->startStopButton->setText("Продовжити");
        watch->pause();
    }
    else {
        ui->startStopButton->setText("Пауза");
        watch->start();
    }
}

void MainWindow::resetTimer() {
    ui->startStopButton->setText("Старт");
    ui->hundredthsText->setText("00");
    ui->secondsText->setText("00");
    ui->minutesText->setText("00");
    watch->reset();
}

void MainWindow::update()
{
    if(watch->isRunning())
    {
        qint64 time = watch->getTime();
        long long h = time / 1000 / 60 / 60;
        long long m = (time / 1000 / 60) - (h * 60);
        long long s = (time / 1000) - (m * 60);
        long long ms = time - ( s + ( m + ( h * 60)) * 60) * 1000;
        long long ms_dis = ms / 10;
        if(ms_dis < 10) {
            ui->hundredthsText->setText(QStringLiteral("0%1").arg(ms_dis));
        }
        else {
            ui->hundredthsText->setText(QStringLiteral("%1").arg(ms_dis));
        }
        if(s < 10) {
            ui->secondsText->setText(QStringLiteral("0%1").arg(s));
        }
        else {
            ui->secondsText->setText(QStringLiteral("%1").arg(s));
        }
        if(m < 10) {
            ui->minutesText->setText(QStringLiteral("0%1").arg(m));
        }
        else {
            ui->minutesText->setText(QStringLiteral("%1").arg(m));
        }
    }
}
