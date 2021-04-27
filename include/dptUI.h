#ifndef DPTUI_H
#define DPTUI_H

#include <QMainWindow>
#include <QtWidgets>
#include <QtCore>

class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

};
#endif // DPTUI_H