#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDialog>
#include <QShortcut>
#include <QLabel>
#include <QLayout>

class MainWindow : public QMainWindow {
  Q_OBJECT
 public:
  MainWindow();

  void closeEvent();

 private:
  QPushButton* exit_button_;
  QShortcut* shortcut;
  QDialog* exit_confirm;
  void CreateExitWidgets();
  void CreateTaskWidgets();
};
#endif //MAINWINDOW_H