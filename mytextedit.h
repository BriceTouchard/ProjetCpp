#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QTextEdit>

class MyTextEdit : public QTextEdit
{
public:
    MyTextEdit(QWidget *parent = nullptr);
    QString initText;

    void setInitText(const QString &newInitText);
};

#endif // MYTEXTEDIT_H
