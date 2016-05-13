#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

private slots:
    void quitProgram( ) ;
    void readFile( ) ;
    void enableFindButton(const QString &text);
    void findClicked( ) ;

signals:
    //void findNext( const QString &str, Qt::CaseSensitivity cs ) ;
    //void findPrevious( const QString &str, Qt::CaseSensitivity cs ) ;


private:
    Ui::MainWindow *ui;
    QMenu *fileMenu ;
    QMenu *editMenu ;
    QAction *quitAct ;
    QAction *findAct ;
    QAction *loadAct ;
} ;

#endif // MAINWINDOW_H
