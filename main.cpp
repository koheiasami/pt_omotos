#include "maindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainDialog mainDialog;
    mainDialog.show();

    return app.exec();
}
