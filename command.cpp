#include "command.h"
#include "ui_command.h"

command::command(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::command)
{
    ui->setupUi(this);
}

command::~command()
{
    delete ui;
}
