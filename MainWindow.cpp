#include "MainWindow.h"

MainWindow::MainWindow() {
  resize(1500, 1000);
  setWindowIcon(QIcon("D:/clion/lab_5/icon.png"));
  setWindowTitle("Super App");
  CreateExitWidgets();
  // CreateTaskWidgets();
}

void MainWindow::CreateExitWidgets() {
  exit_button_ = new QPushButton(this);
  exit_button_->setText("Выход");
  exit_button_->resize(50, 25);
  exit_button_->move(0, 0);
  connect(exit_button_, &QPushButton::clicked, this, &MainWindow::closeEvent);
  shortcut = new QShortcut(QKeySequence("Ctrl+Q"),this);
  connect(shortcut, &QShortcut::activated, this, &MainWindow::closeEvent);
}

void MainWindow::closeEvent() {
  exit_confirm = new QDialog(exit_button_);
  exit_confirm->resize(300, 100);
  exit_confirm->windowIconText();
  QLabel* str = new QLabel(exit_confirm);
  str->setText("Выйти?");
  str->move(125, 25);
  QPushButton* no_button = new QPushButton(exit_confirm);
  no_button->setText("Нет");
  no_button->resize(50, 25);
  no_button->move(200, 60);
  connect(no_button, SIGNAL(clicked()), exit_confirm, SLOT(close()));
  QPushButton* yes_button = new QPushButton(exit_confirm);
  yes_button->setText("Да");
  yes_button->resize(50, 25);
  yes_button->move(50, 60);
  connect(yes_button, SIGNAL(clicked()), exit_confirm, SLOT(quit()));
  exit_confirm->exec();
}

// void MainWindow::CreateTaskWidgets() {
//   QGridLayout* tasks = new QGridLayout(this);
//
//
//
//   QWidget* task1 = new QWidget(this);
//   QPushButton* Pick_an_Option = new QPushButton(task1);
//   Pick_an_Option->setText("Pick-an-Option");
//   Pick_an_Option->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
//   Pick_an_Option->resize(100, 200);
//
//   QWidget* task2 = new QWidget(this);
//   QPushButton* Input_answer = new QPushButton(task2);
//   Input_answer->setText("Input-answer");
//   Input_answer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
//   Input_answer->resize(100, 200);
//
//   QWidget* task3 = new QWidget(this);
//   QPushButton* Audio = new QPushButton(task3);
//   Audio->setText("Audio");
//   Audio->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
//   Audio->resize(100, 200);
//
//   QWidget* task4 = new QWidget(this);
//   QPushButton* Mixed = new QPushButton(task4);
//   Mixed->setText("Mixed");
//   Mixed->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
//   Mixed->resize(100, 200);
//
//   tasks->setSpacing(30);
//   tasks->addWidget(task1);
//   tasks->addWidget(task2);
//   tasks->addWidget(task3);
//   tasks->addWidget(task4);
//
//
//   setLayout(tasks);
// }
