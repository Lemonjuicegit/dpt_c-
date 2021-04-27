#ifndef DPTBUTTONGROUP_H
#define DPTBUTTONGROUP_H
#include <QPushButton>
#include <QGridLayout>
#include <QWidget>
#include <QString>
class dptButtonGroup: public QWidget{

    int row;
    int column;
    QWidget *parent;
    QString **text;
    QGridLayout *layout=new QGridLayout(parent);
    QPushButton ***button=new QPushButton**[row-1];

public:
    dptButtonGroup(QWidget *parent, int row,int column);
    int* getRowColumn();
    void setButton(int row,int column,QString **text);
    void getText(QString **text);
    ~dptButtonGroup();

};
#endif // DPTBUTTONGROUP_H