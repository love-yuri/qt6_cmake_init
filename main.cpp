#include <QApplication>
#include <QTranslator>
#include "include/mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow window;
  return a.exec();
}
