#include <QApplication>
#include "dptUI.h"
int main(int argc, char *argv[]){
    QApplication app(argc,argv);
    QWidget *Widget;
    MainWindow ui(Widget);
    return app.exec();
}
