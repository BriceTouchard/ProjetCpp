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
    connect(ui->textEditTab, &MyTextEdit::textChanged, this, &Tab::addStar2);
}

Tab::~Tab()
{
    delete ui;
}

void Tab::addStar2()
{
    emit signal1();
}

