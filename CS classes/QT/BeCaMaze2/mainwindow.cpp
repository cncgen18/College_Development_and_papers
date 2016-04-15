#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include <QTextEdit>
#include "BeCaMaze.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    quitAct = new QAction( "&Quit", this ) ;
    quitAct->setShortcuts( QKeySequence::Quit ) ;
    quitAct->setStatusTip( "Exit program" ) ;
    connect( quitAct, SIGNAL( triggered( ) ), this, SLOT( quitProgram( ) ) ) ;

    fileMenu = menuBar( )->addMenu( "&File" ) ;
    fileMenu->addAction( quitAct ) ;
    fileMenu->addAction( solveAct ) ;
    fileMenu->addAction( resetAct ) ;
}

MainWindow::~MainWindow()
{
    //open maze file
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "",
                                                    tr("Files (*.*)"));
    UMaze = BeCaMaze(fileName);     //saves unsolved maze
    Maze = BeCaMaze(fileName);      //holds the maze to be solved
    textEdit.setText(Umaze.print());        //print maze into the textBox







    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    Maze.solve();   //solves maze
    textEdit.setText(Maze.print());         //print solved maze
    textEdit_2.setText(Maze.getNumPaths()); //set num paths textBox
    textEdit_3.setText(Maze.getLargestArea());  //set largest area textBox
}

void MainWindow::on_pushButton_2_clicked()
{
    Maze = UMaze;   //reset Maze
    textEdit.setText(UMaze.print()); //print unsolved maze into textbox
    textEdit_2.setText("");         //reset path num textbox
    textEdit_3.setText("");         //reset largest area textbox
}

