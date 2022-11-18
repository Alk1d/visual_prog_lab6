#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QHBoxLayout"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *widget = new QWidget;

    QPushButton *button1 = new QPushButton("Show Error");
    QPushButton *button2 = new QPushButton("Show Warning");
    QPushButton *button3 = new QPushButton("Show Information");

    QHBoxLayout *Layout = new QHBoxLayout;
    Layout->addWidget(button1);
    Layout->addWidget(button2);
    Layout->addWidget(button3);

    widget->setLayout(Layout);

    // connect( button1, &QPushButton::clicked, this, &MainWindow::ErrorButtonClicked );

    widget->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

