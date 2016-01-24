/* File: pong_canvas.h
   Author: Richard Eisenberg (eir@cis)
   Desc: header file for Pong canvas. The game logic goes here.
*/

#ifndef PONG_CANVAS_H_
#define PONG_CANVAS_H_

#include <QtGui>

class PongCanvas : public QWidget
{
  Q_OBJECT

 public:
  PongCanvas(QWidget* parent);

 signals:
  void needsButtonChange(QString str);

 public slots:
  void buttonPress();

 protected:
  void paintEvent(QPaintEvent* event);
  void keyPressEvent(QKeyEvent* event);
  void keyReleaseEvent(QKeyEvent* event);

 private slots:
  void timerTicked();

 private:
  void reset(); // reset playing field

  enum State { BEFORE_PLAY, PLAYING, PAUSED, AFTER_PLAY } state;

  QTimer* timer;

  // coordinates of the left sides of the paddles
  int playerX;
  int compX;

  QPoint ball; // coordinates of center of ball

  // direction of ball
  bool goingRight;
  bool goingDown;

  // movement of player paddle
  bool paddleLeft;
  bool paddleRight;

  static const int WIDTH = 400;
  static const int HEIGHT = 300;

  static const int PADDLE_WIDTH = 40;
  static const int PADDLE_HEIGHT = 10;

  static const int BALL_RADIUS = 5; 
};

#endif
