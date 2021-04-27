#include "./include/dptUI.h"
#include "./include/dptButtonGroup.h"
MainWindow::MainWindow(QWidget *parent):QMainWindow(parent){
    dptButtonGroup *buttonGroup=new dptButtonGroup(parent,2,2);
}