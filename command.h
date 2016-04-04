#ifndef COMMAND_H
#define COMMAND_H

#include <QMainWindow>

namespace Ui {
class command;
}

class command : public QMainWindow
{
    Q_OBJECT

public:
    explicit command(QWidget *parent = 0);
    ~command();

private:
    Ui::command *ui;
};

#endif // COMMAND_H
