#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(onButtonClicked()));
    displayText = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{
    if(displayText == false){
        ui->label->setText(tr("Hello World"));
        displayText = true;
    }else{
        ui->label->setText(tr(""));
        displayText = false;
    }
}