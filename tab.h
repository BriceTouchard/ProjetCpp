#ifndef TAB_H
#define TAB_H

#include <QWidget>

namespace Ui {
class Tab;
}

class Tab : public QWidget
{
    Q_OBJECT

signals:
    void signal1 ();

public:
    explicit Tab(QWidget *parent = nullptr);
    ~Tab();

private:
    Ui::Tab *ui;

private slots:
    void addStar2();

//    void on_textEdit_textChanged();
};

#endif // TAB_H
