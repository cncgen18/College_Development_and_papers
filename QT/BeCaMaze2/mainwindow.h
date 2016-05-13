#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "BeCaMaze.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_textBrowser_textChanged();

    void on_mazeText_textChanged();

    void on_textEdit_textChanged();

private:
    Ui::MainWindow *ui;
    QMenu *fileMenu ;
    QAction *quitAct ;
    QAction *solveAct ;
    QAction *resetAct;
    QObject *Maze;
    QObject *UMaze;
};

#endif // MAINWINDOW_H
