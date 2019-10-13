#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QStandardItem"
#include "QStandardItemModel"
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
    QStandardItemModel *model;
    QStandardItemModel *model_2;
    QStandardItem *item;
    QStandardItem *item_2;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
