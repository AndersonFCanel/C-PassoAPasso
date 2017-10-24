#include <string>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "todo_parser.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::saveList(string status, my_list<todo*>* todos, QTextStream* out)
{
    for (int i = 0; i < todos->get_size(); i++)
        (*out) << QString::fromStdString(status) << " " << QString::fromStdString(todos->get(i)->get_text()) << endl;
}

void MainWindow::updateList(my_list<todo*>* todos, QListWidget* l_wdg)
{
    l_wdg->clear();

    for (int i = 0; i < todos->get_size(); i++)
        l_wdg->addItem(QString::fromStdString(todos->get(i)->get_text()));
}

void MainWindow::updateInterface()
{
    updateList(t_mgr.get_current(), ui->currentListWidget);
    updateList(t_mgr.get_future(), ui->futureListWidget);
    updateList(t_mgr.get_completed(), ui->completedListWidget);
}

void MainWindow::displayMessageBox(string text)
{
    QMessageBox msgBox;

    msgBox.setWindowTitle("Alert");
    msgBox.setIcon(QMessageBox::Warning);
    msgBox.setText(QString::fromStdString(text));

    msgBox.exec();
}

void MainWindow::displayFillTheTodoTextFieldMessageBox()
{
    displayMessageBox("The todo cannot be empty.");
}

void MainWindow::displaySelectATodoMessageBox()
{
    displayMessageBox("Select a todo.");
}

void MainWindow::on_actionOpen_triggered()
{
    string openFileName = QFileDialog::getOpenFileName().toStdString();

    if (openFileName.length() > 0)
    {
        QFile file(QString::fromStdString(openFileName));
        file.open(QIODevice::ReadOnly | QIODevice::Text);

        t_mgr.get_current()->clear();
        t_mgr.get_future()->clear();
        t_mgr.get_completed()->clear();

        QTextStream in(&file);

        while (!in.atEnd())
            todo_parser::parse_data(&t_mgr, in.readLine().toStdString());
    }

    updateInterface();
}

void MainWindow::on_actionSave_triggered()
{
    string saveFileName = QFileDialog::getSaveFileName().toStdString();

    if (saveFileName.length() > 0)
    {
        QFile file(QString::fromStdString(saveFileName));
        file.open(QIODevice::WriteOnly | QIODevice::Text);

        QTextStream out(&file);

        saveList("current", t_mgr.get_current(), &out);
        saveList("future", t_mgr.get_future(), &out);
        saveList("completed", t_mgr.get_completed(), &out);
    }
}

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}

void MainWindow::addButtonClick()
{
    string text = ui->lineEdit->text().toStdString();

    if (text.length() > 0)
    {
        t_mgr.add_current(text);

        ui->lineEdit->setText("");

        updateInterface();
    }

    else
        displayFillTheTodoTextFieldMessageBox();
}

void MainWindow::moveToFutureButtonClick()
{
    int currentRow = ui->currentListWidget->currentRow();

    if (currentRow != -1)
        t_mgr.move_to_future(currentRow);
    else
        displaySelectATodoMessageBox();

    updateInterface();
}

void MainWindow::completeButtonClick()
{
    int currentIndex = ui->tabWidget->currentIndex();
    int currentRow;

    if (currentIndex == 0)
    {
        currentRow = ui->currentListWidget->currentRow();

        if (currentRow != -1)
            t_mgr.complete_current(ui->currentListWidget->currentRow());
        else
            displaySelectATodoMessageBox();
    }

    else if (currentIndex == 1)
    {
        currentRow = ui->futureListWidget->currentRow();

        if (currentRow != -1)
            t_mgr.complete_future(ui->futureListWidget->currentRow());
        else
            displaySelectATodoMessageBox();
    }

    updateInterface();
}

void MainWindow::removeButtonClick()
{
    int currentIndex = ui->tabWidget->currentIndex();
    int currentRow;

    if (currentIndex == 0)
    {
        currentRow = ui->currentListWidget->currentRow();

        if (currentRow != -1)
            t_mgr.remove_current(ui->currentListWidget->currentRow());
        else
            displaySelectATodoMessageBox();
    }

    else if (currentIndex == 1)
    {
        currentRow = ui->futureListWidget->currentRow();

        if (currentRow != -1)
            t_mgr.remove_future(ui->futureListWidget->currentRow());
        else
            displaySelectATodoMessageBox();
    }

    else if (currentIndex == 2)
    {
        currentRow = ui->completedListWidget->currentRow();

        if (currentRow != -1)
            t_mgr.remove_completed(ui->completedListWidget->currentRow());
        else
            displaySelectATodoMessageBox();
    }

    updateInterface();
}
