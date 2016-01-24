/* File: breakout_canvas.h
   Desc: header file for Breakout canvas. The game logic goes here.
*/

#ifndef BREAKOUT_CANVAS_H_
#define BREAKOUT_CANVAS_H_

#include <QtGui>

class BreakoutCanvas : public QWidget
{
  Q_OBJECT

 public:
  BreakoutCanvas(QWidget* parent);

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

  enum State { BEFORE_PLAY, PLAYING, PAUSED, LOSS, WIN } state;

  QTimer* timer;

  // coordinates of the left sides of the paddle and blocks
  int playerX;
  int blocks [10];

  // if the blocks have been destroyed or not
  bool destroyed [10];

  QPoint ball; // coordinates of center of ball

  // direction of ball
  bool goingRight;
  bool goingDown;

  // movement of player paddle
  bool paddleLeft;
  bool paddleRight;

  static const int WIDTH = 400;
  static const int HEIGHT = 300;

  static const int BLOCK_WIDTH = (WIDTH-2*11)/10;

  static const int PADDLE_WIDTH = 50;
  static const int PADDLE_HEIGHT = 10;

  static const int BALL_RADIUS = 5; 
};

#endif
