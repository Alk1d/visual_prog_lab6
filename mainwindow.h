#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    // В классе окна присоединить(connect) события клика QPushButton::clicked
    // на каждую из кнопок на отдельный метод-слот

    // connect( button1, &QPushButton::clicked, this, onErrorButtonClicked );

    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
//   void onErrorButtonClicked();
//    void OnWarningButtonClicked();
//    void OnInformationButtonClicked();

};
#endif // MAINWINDOW_H
