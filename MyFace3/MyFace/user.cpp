#include "user.h"

#include <iostream>
#include <sstream>
#include <string>
User::User(){
}
bool User::save(){
  QSqlQuery query;
  query.prepare("UPDATE users "
		" SET "
		"fname=:fname,"
		"lname=:lname,"
		"position=:position,"
		"phone=:phone,"
		"email=:email,"
		"location=:location"
		" WHERE id=:id");
  query.bindValue(":fname", fname);
  query.bindValue(":lname", lname);
  query.bindValue(":position", position);
  query.bindValue(":phone", phone);
  query.bindValue(":email", email);
  query.bindValue(":location", location);
  query.bindValue(":id", id);

  return query.exec();
}

bool User::add(QString username, QString password){
  QSqlQuery query;
  query.prepare("INSERT INTO users (username, password)"
		"VALUES (:username, :password)");
  query.bindValue(":username", username);
  query.bindValue(":password", password);
  
  return query.exec(); 
  
}

User** User::getSearchResults(QString queryString, User** uarr) {
  std::string s = queryString.toStdString();
  //buffer string
  std::string buf;
  //split the string
  std::stringstream ss(s);
  std::vector<std::string> tokens;
  while (ss >> buf) 
    tokens.push_back(buf);
  if(tokens.size() > 2 || tokens.size() < 1) {
    return NULL;
  } 
  std::string firstname = tokens[0];
  std::string lastname;
  QString fname = QString::fromStdString(firstname);
  QSqlQuery query;
  if(tokens.size() == 2) {
    lastname = tokens[1];
    QString lname = QString::fromStdString(lastname);
    query.prepare("SELECT * FROM users WHERE fname LIKE :firstname % AND lname LIKE :lastname %");
    query.bindValue(":firstname", fname);
    query.bindValue(":lastname", lname);
    query.exec();
    if(!query.first()) {
      return NULL;
    }
    uarr[query.size()];
    int i = 0;
    QSqlRecord rec = query.record();
    while(query.next()) {
      User* user = new User;
      user->id = rec.value("id").toInt();
      user->username = rec.value("username").toString();
      user->password = rec.value("password").toString();
      user->fname = rec.value("fname").toString();
      user->lname = rec.value("lname").toString();
      user->position = rec.value("position").toString();
      user->phone = rec.value("phone").toString();
      user->email = rec.value("email").toString();
      user->location = rec.value("location").toString();
      uarr[i] = user;
      i++;
    }
    return uarr;
  }
  else if (tokens.size() == 1) {
    query.prepare("SELECT * FROM users WHERE fname LIKE :firstname %");
    query.bindValue(":firstname", fname);
    query.exec();
    if(!query.first()) {
      return NULL;
    }
    uarr[query.size()];
    int i = 0;
    QSqlRecord rec = query.record();
    while(query.next()) {
      User* user = new User;
      user->id = rec.value("id").toInt();
      user->username = rec.value("username").toString();
      user->password = rec.value("password").toString();
      user->fname = rec.value("fname").toString();
      user->lname = rec.value("lname").toString();
      user->position = rec.value("position").toString();
      user->phone = rec.value("phone").toString();
      user->email = rec.value("email").toString();
      user->location = rec.value("location").toString();
      uarr[i] = user;
      i++;
    }
    return uarr;
  }
  return NULL;
}

User* User::getOneByUsername(QString username){

  QSqlQuery query;
  query.prepare("SELECT * FROM users WHERE username=:username");
  query.bindValue(":username", username);
  query.exec();

  if (!query.first()){ //no such user
    return NULL; 
  }

  QSqlRecord rec = query.record();
  
  User* user = new User;
  // populate user information from returned database row
  user->id = rec.value("id").toInt();
  user->username = rec.value("username").toString();
  user->password = rec.value("password").toString();
  user->fname = rec.value("fname").toString();
  user->lname = rec.value("lname").toString();
  user->position = rec.value("position").toString();
  user->phone = rec.value("phone").toString();
  user->email = rec.value("email").toString();
  user->location = rec.value("location").toString();

  return user;

}

User* User::getOneById(int id){
  QSqlQuery query;
  query.prepare("SELECT * FROM users WHERE id=:id");
  query.bindValue(":id", id);
  query.exec();

  if (query.size() == 0){ //no such user
    return NULL; 
  }

  QSqlRecord rec = query.record();
  
  User* user = new User;
  // populate user information from returned database row
  user->id = rec.value("id").toInt();
  //  user->fname = rec.value("fname").toString();
  //  user->lname = rec.value("lname").toString();
  user->password = rec.value("password").toString();


  return user;
}

void User::setupDB(){

    //database stuff
  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("myface.db");
  if(!db.open()){
      //failed to connect
    qDebug() << db.lastError().text();
    }

    // create user table

    const QString CREATE( "CREATE TABLE IF NOT EXISTS users ("
	      "id integer primary key autoincrement,"
	      "username varchar(20),"
	      "password varchar(20),"
	      "fname varchar(20),"
	      "lname varchar(20),"
	      "position varchar(20),"
	      "phone varchar(20),"
	      "email varchar(40),"
	      "location varchar(20)"
	      ")"  );

    QSqlQuery query(CREATE, db);

}
