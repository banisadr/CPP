/* File: pong.h
   Author: Richard Eisenberg (eir@cis)
   Desc: Header file for Pong window
*/

#ifndef PONG_H_
#define PONG_H_

#include <QtGui>

// This is a forward class declaration -- it says to C++ that there is
// a class named PongCanvas, but we don't know any details yet
class PongCanvas;

// The Pong class manages the window, which is just a container for the
// PongCanvas (where all the game logic lives) and the one control button.
class Pong : public QWidget
{
  Q_OBJECT

 public:
  Pong();

 private slots:
  // allow other objects (like the PongCanvas) to change the button text
  void changeButtonText(QString str);

 private:
  PongCanvas* canvas;
  QPushButton* controlButton;
};

#endif
