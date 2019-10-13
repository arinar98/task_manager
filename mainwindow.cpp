#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QStandardItem"
#include "QStandardItemModel"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model=new QStandardItemModel;
    model_2=new QStandardItemModel;
    QStringList horHeader;
    horHeader.append("Имя                                                     ");
    horHeader.append("ЦП");
    horHeader.append("Память");
    horHeader.append("Диск");
    horHeader.append("Сеть");
    horHeader.append("GPU");
    horHeader.append("Ядро GPU");
    horHeader.append("Энергопотребление");
    model->setHorizontalHeaderLabels(horHeader);
    model_2->setHorizontalHeaderLabels(horHeader);
    ui->tableView->setModel(model);
    ui->tableView_2->setModel(model_2);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
    ui->tableView_2->resizeColumnsToContents();
    ui->tableView_2->resizeRowsToContents();

}

MainWindow::~MainWindow()
{
    delete ui;
}


