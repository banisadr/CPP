#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui/QApplication>
#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  // code to setup db initially
  User::setupDB();
  curr_user = NULL;

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//When Logon Button Pressed
{

    QString username_entry = ui->lineEdit->text();
    QString pwd_entry = ui->lineEdit_2->text();

    curr_user = User::getOneByUsername(username_entry);

    if ((curr_user != NULL) && (curr_user->password == pwd_entry)){
      ui->stackedWidget->setCurrentIndex(1);
    }
    else{// user doesn't exist, or password is wrong
        QMessageBox msgBox;
        msgBox.setText("Username/Password Invalid");
        msgBox.exec();
        ui->lineEdit->setPlaceholderText("Invalid Username or Password");
        ui->lineEdit_2->setPlaceholderText("Invalid Username or Password");

    }

}

void MainWindow::on_stackedWidget_currentChanged(int arg1) //When Profile Widget Becomes Active
{
  if (curr_user != NULL){
    ui->username->setText(curr_user->username);
    ui->phone->setText(curr_user->phone);
    ui->position->setText(curr_user->position);
    ui->email->setText(curr_user->email);
    ui->location->setText(curr_user->location);
    //ui->picture->setPicture(); <----How to set arguments?
  }
}

void MainWindow::on_logout_clicked()//Logout Clicked
{
  curr_user = NULL;
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_return_profile_clicked()// Return From Search
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked() //Search Dialog Used
{
    ui->stackedWidget->setCurrentIndex(2);
    QString search = ui->search->text();
    //Need to Impliment search and display results somehow
}

void MainWindow::on_pushButton_4_clicked()//Click Upload Picture
{
    ui->photo_location->setText(QFileDialog::getOpenFileName(this, tr("Open File"),
                                                             "/home",
                                                             tr("Images (*.png *.xpm *.jpg)")));
}

void MainWindow::on_pushButton_2_clicked() //Click Create Profile
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_save_clicked() //Click Save Profile Edits
{

    QString pwd = ui ->pwd_edit->text();
    QString pwd_check = ui->pwd_edit_check->text();

    QString name = ui->name_edit->text();
    QString phone = ui->phone_edit->text();
    QString position = ui->position_edit->text();
    QString email = ui->email_edit->text();
    QString location = ui->location_edit->text();

    if (curr_user != NULL){ // this is an existing user editing their profile
      if ((pwd == pwd_check) && (pwd == curr_user->password)){

	curr_user->phone = phone;
	curr_user->position = position;
	curr_user->email = email;
	curr_user->location = location;

	curr_user->save();
        ui->stackedWidget->setCurrentIndex(1);

      }
      else{ // passwords don't match
        QMessageBox msgBox;
        msgBox.setText("Passwords Do Not Match!");
        msgBox.exec();
      }

    }
    else{ // this is a new user
      if (pwd == pwd_check){
	User::add(name, pwd);
	curr_user = User::getOneByUsername(name);
	curr_user->phone = phone;
	curr_user->position = position;
	curr_user->email = email;
	curr_user->location = location;

	curr_user->save();
        ui->stackedWidget->setCurrentIndex(1);

      }
      else{ // passwords don't match
        QMessageBox msgBox;
        msgBox.setText("Passwords Do Not Match!");
        msgBox.exec();
      }
    }

}

void MainWindow::on_edit_clicked() //Clicked Edit From Profile
{
    ui->stackedWidget->setCurrentIndex(3);

  if (curr_user != NULL){
    ui->name_edit->setText(curr_user->username);
    ui->phone_edit->setText(curr_user->phone);
    ui->position_edit->setText(curr_user->position);
    ui->email_edit->setText(curr_user->email);
    ui->location_edit->setText(curr_user->location);
    //ui->picture->setPicture(); <----How to set arguments?
  }


}
