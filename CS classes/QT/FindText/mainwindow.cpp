#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connectors (callbacks for events)
    // could do this through the Designer as well
    connect( ui->textEdit, SIGNAL( textChanged( const QString & ) ), this, SLOT( enableFindButton( const QString & ) ) ) ;
    connect( ui->findButton, SIGNAL( clicked( ) ), this, SLOT( findClicked( ) ) ) ;

    // set up actions
    quitAct = new QAction( "&Quit", this ) ;
    quitAct->setShortcuts( QKeySequence::Quit ) ;
    quitAct->setStatusTip( "Exit program" ) ;
    connect( quitAct, SIGNAL( triggered( ) ), this, SLOT( quitProgram( ) ) ) ;

    findAct = new QAction( "&Find", this ) ;
    findAct->setShortcuts( QKeySequence::Find ) ;
    findAct->setStatusTip( "Find text" ) ;
    connect( findAct, SIGNAL( triggered( ) ), this, SLOT( findClick( ) ) ) ;

    loadAct = new QAction( "&Open", this ) ;
    loadAct->setShortcuts( QKeySequence::Open ) ;
    loadAct->setStatusTip( "Load text" ) ;
    connect( loadAct, SIGNAL( triggered( ) ), this, SLOT( readFile( ) ) ) ;


    // set up menus
    fileMenu = menuBar( )->addMenu( "&File" ) ;
    fileMenu->addAction( quitAct ) ;
    fileMenu->addAction( loadAct ) ;

    editMenu = menuBar( )->addMenu( "&Edit" ) ;
    editMenu->addAction( findAct ) ;

    // other config
    setWindowTitle( "Find Example" ) ;
    QString message = "Try loading a file" ;
    statusBar( )->showMessage( message ) ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::findClicked( )
{
    if( ui->checkBoxBackward->isChecked( ) )
    {
        qDebug() << "Find prev" ;
        ui->textEdit->find( ui->lineEdit->text( ), QTextDocument::FindBackward ) ;

    }
    else
    {
        qDebug() << "Find next" ;
        //emit findNext( text, cs ) ;
        ui->textEdit->find( ui->lineEdit->text( ) ) ;
    }
}

void MainWindow::enableFindButton(const QString &text)
{
    ui->findButton->setEnabled( !text.isEmpty( ) ) ;
}

void MainWindow::readFile( )
{
    ui->textEdit->setText( "reading..." ) ;
    QString fileName = QFileDialog::getOpenFileName( this, "Open File" ) ;
    QFile file( fileName ) ;
    QString line ;
    ui->textEdit->clear( ) ;

    if( file.open( QIODevice::ReadOnly | QIODevice::Text ) )
    {
        QTextStream stream( &file ) ;
        while( !stream.atEnd( ) )
        {
            line = stream.readLine( ) ;
            ui->textEdit->setText( ui->textEdit->toPlainText( )+line+"\n" ) ;
            qDebug() << "Read line: " << line ;
         }
    }
    file.close( ) ;
}

void MainWindow::quitProgram( )
{
    qApp->quit( ) ;
}
