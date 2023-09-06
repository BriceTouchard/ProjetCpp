#include "tab.h"
#include "ui_tab.h"
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <list>
#include <tab.h>
#include <QMessageBox>

Tab::Tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab)
{
    ui->setupUi(this);
//    connect(ui->tabWidget->currentWidget()->findChild<QTextEdit *>(), &QTextEdit::textChanged, this, &MainWindow::addStar);
//    connect(ui->pushButtonOpen, SIGNAL(clicked( bool)), this, SLOT(Open(bool))); // ancienne syntaxe

//    connect(this, &QTextEdit::textChanged, this, &Tab::addStar2);
//    connect(this, SIGNAL(textChanged(const QString &)), this, SLOT(addStar2()));
}

Tab::~Tab()
{
    delete ui;
}

void Tab::addStar2()
{
//    int index = ui->tabWidget->currentIndex();
//    QString fileName = ui->tabWidget->tabText(index);
//    if(fileName.contains("*")){

//    }else{
//        fileName.append("*");
//        ui->tabWidget->setTabText(index,fileName);
//    }
}



//void Tab::on_textEdit_textChanged()
//{
//    qDebug() << "Hey";

//}

