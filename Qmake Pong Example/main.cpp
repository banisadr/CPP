/* File: main.cpp
   Author: Richard Eisenberg (eir@cis)
   Desc: Main file to start off Pong
*/

#include <QtGui>
#include "pong.h"

int main(int argc, char** argv)
{
  QApplication app(argc, argv);

  Pong pong;
  pong.show();

  return app.exec();
}
