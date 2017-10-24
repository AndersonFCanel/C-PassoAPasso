#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QListWidget>
#include "todo_manager.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;
        todo_manager t_mgr;

        void saveList(string status, my_list<todo*>* todos, QTextStream* out);
        void updateList(my_list<todo*>* todos, QListWidget* l_wdg);
        void updateInterface();
        void displayMessageBox(string text);
        void displayFillTheTodoTextFieldMessageBox();
        void displaySelectATodoMessageBox();

    private slots:
        void on_actionExit_triggered();
        void on_actionSave_triggered();
        void on_actionOpen_triggered();
        void addButtonClick();
        void moveToFutureButtonClick();
        void completeButtonClick();
        void removeButtonClick();
};

#endif // MAINWINDOW_H
