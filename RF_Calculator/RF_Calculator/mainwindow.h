#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qmath.h>

#define nHenery 1
#define uHenery 2
#define mHenery 3
#define Henery 4

#define Hertz 1
#define kiloHertz 2
#define MegaHertz 3

#define ERROR 0

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Init();

private:
    Ui::MainWindow *ui;
private slots:
    void on_InductorCalcpushButton_clicked();
    void on_CapcitanceCalcpushButton_clicked();
};
#endif // MAINWINDOW_H
