#include "mytextedit.h"

MyTextEdit::MyTextEdit(QWidget *parent) : QTextEdit(parent)
{

}

void MyTextEdit::setInitText(const QString &newInitText)
{
    initText = newInitText;
}
