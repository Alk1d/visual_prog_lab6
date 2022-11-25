#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QHBoxLayout"
#include <QMessageBox>
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

     connect( button1, &QPushButton::clicked, this, &MainWindow::onErrorButtonClicked );
     connect( button2, &QPushButton::clicked, this, &MainWindow::onWarningButtonClicked );
     connect( button3, &QPushButton::clicked, this, &MainWindow::onInformationButtonClicked );


    widget->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onErrorButtonClicked()
{
    int ret = QMessageBox::critical(this, tr("visual_prog_lab6"),
                                   tr("The document has been modified.\n"
                                      "Do you want to save your changes?"),
                                   QMessageBox::Save | QMessageBox::Discard
                                   | QMessageBox::Cancel,
                                   QMessageBox::Save);
}

void MainWindow::onWarningButtonClicked()
{
    int ret = QMessageBox::warning(this, tr("visual_prog_lab6"),
                                   tr("The document has been modified.\n"
                                      "Do you want to save your changes?"),
                                   QMessageBox::Save | QMessageBox::Discard
                                   | QMessageBox::Cancel,
                                   QMessageBox::Save);
}

void MainWindow::onInformationButtonClicked()
{
    int ret = QMessageBox::information(this, tr("visual_prog_lab6"),
                                   tr("The document has been modified.\n"
                                      "Do you want to save your changes?"),
                                   QMessageBox::Save | QMessageBox::Discard
                                   | QMessageBox::Cancel,
                                   QMessageBox::Save);
}

