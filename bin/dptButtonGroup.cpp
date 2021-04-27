#include "../include/dptButtonGroup.h"
dptButtonGroup::dptButtonGroup(QWidget *parent,int row=1,int column=1):QWidget(parent),row(row),column(column){

    this->parent=parent;
    QString temp="button";

    if(row>0 && column>0){

        for (int i=0;i<row;i++){
            this->button[i]=new QPushButton*[column-1];
            for (int j=0;j<column;j++){
                QString ButtonName=QString::number((i+1)*(j+1),16);
                ButtonName.append(temp);
                this->button[i][j]=new QPushButton(parent);
                this->button[i][j]->setObjectName(ButtonName);
                this->text[i][j]=ButtonName;
                this->layout->addWidget(this->button[i][j],i,j);
            }
        }
    }
}

int* dptButtonGroup::getRowColumn(){
    int* rowcolumn=new int[2];
    rowcolumn[0]=this->row;
    rowcolumn[1]=this->column;
    return rowcolumn;
}

void dptButtonGroup::setButton(int row,int column,QString **text){
    this->row=row;
    this->column=column;
    QString temp="button";

    if(row>0 && column>0){

        for (int i=0;i<row;i++){
            this->button[i]=new QPushButton*[column-1];
            this->text[i]=new QString[column-1];
            for (int j=0;j<column;j++){
                QString ButtonName=QString::number((i+1)*(j+1),16);
                ButtonName.append(temp);
                this->button[i][j]=new QPushButton(parent);
                this->button[i][j]->setObjectName(ButtonName);
                this->text[i][j]=ButtonName;
                this->layout->addWidget(this->button[i][j],i,j);
            }
        }
    }
}

void dptButtonGroup::getText(QString **text){
    this->text=text;
}

dptButtonGroup::~dptButtonGroup(){
    int len=sizeof(this->text);
    for(int i=0;i<len;i++){
        delete this->text[i];
    }
    delete this->text;
}

