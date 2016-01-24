#include <QtSql>

class User{
 private:
  User();
 public:
  int id;
  QString username;
  QString password;
  QString fname;
  QString lname;
  QString position;
  QString phone;
  QString email;
  QString location;

  // save current user variables to database
  bool save();

  // add a new user
  static bool add(QString username, QString password);

  // get a user by firstname lastname
  static User* getOneByUsername(QString username);

  // get a user by id
  // returns NULL if not found
  static User* getOneById(int id);

  // must call this function at start of application
  static void setupDB();

  static User** getSearchResults(QString queryString, User** uarr) ;
};
