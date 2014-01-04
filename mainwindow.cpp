#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>

void MainWindow::updateSports()
{
    sports = new QStringListModel(lst);
    ui->sportsView->setModel(sports);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lst.append("hello");
    lst.append("hi");
    sports = new QStringListModel(lst);
    ui->sportsView->setModel(sports);
    lst.append("haha");
    connect(ui->add, SIGNAL(clicked()), this, SLOT(updateSports()));
}

MainWindow::~MainWindow()
{
    delete sports;
    delete ui;
}
