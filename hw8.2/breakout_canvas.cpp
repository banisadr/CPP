/* File: breakout_canvas.cpp 
   Desc: Defines the behavior of the Breakout game
*/

#include <QtGui>
#include "breakout_canvas.h"

BreakoutCanvas::BreakoutCanvas(QWidget* parent)
  : QWidget(parent) // This passes the constructor parameter to the superclass
{  
  timer = new QTimer(this);
  timer->setInterval(5); // an interval of 5ms
  connect(timer, SIGNAL(timeout()), this, SLOT(timerTicked()));

  setFixedSize(WIDTH, HEIGHT);

  reset();
}

void BreakoutCanvas::buttonPress()
{
  switch(state)
  {
  case BEFORE_PLAY:
    timer->start();
    needsButtonChange("Pause");
    state = PLAYING;
    break;

  case PLAYING:
    timer->stop();
    needsButtonChange("Resume");
    state = PAUSED;
    break;

  case PAUSED:
    timer->start();
    needsButtonChange("Pause");
    state = PLAYING;
    break;

  case LOSS:
    reset();
    needsButtonChange("Start");
    state = BEFORE_PLAY;
    break;

  case WIN:
	reset();
	needsButtonChange("Start");
	state = BEFORE_PLAY;
	break;
  }
  
  setFocus(Qt::OtherFocusReason); // make sure that the canvas gets keystrokes
}

void BreakoutCanvas::reset()
{
  // center paddle and ball bricks
  playerX = WIDTH / 2 - (PADDLE_WIDTH / 2);
  ball = QPoint(WIDTH / 2, HEIGHT / 2);

  for(int i = 0; i<10; i++)
  {
	destroyed[i] = false;
    blocks[i] = (WIDTH/10)*i + i;
  }

  // moving up and right
  goingDown = false;
  goingRight = true;

  // player's paddle is not moving
  paddleLeft = false;
  paddleRight = false;

  state = BEFORE_PLAY;

  // update() forces a repaint of the canvas
  update();
}

// we ignore the QPaintEvent* parameter, so we omit the name to avoid getting
// a warning
void BreakoutCanvas::paintEvent(QPaintEvent*)
{
  // create painting context -- the painting context does all the work
  QPainter p(this);

  // draw a frame around the field:
  p.drawRect(0, 0, WIDTH-1, HEIGHT-1);

  // draw the paddle
  p.fillRect(playerX, HEIGHT - PADDLE_HEIGHT,
	     PADDLE_WIDTH, PADDLE_HEIGHT, Qt::blue);

  // draw the bricks
  for(int i = 0; i<10; i++)
  {
	 if(destroyed[i] == false)
	 {
		p.fillRect(blocks[i], 0, BLOCK_WIDTH, PADDLE_HEIGHT, Qt::black);
	 }
  }

  // no fillEllipse... so we need to set the brush and use drawEllipse
  p.setBrush(Qt::red); // use implicit QBrush constructor
  p.drawEllipse(ball.x() - BALL_RADIUS, ball.y() - BALL_RADIUS,
		BALL_RADIUS * 2, BALL_RADIUS * 2);

  // show that the user lost/won if necessary
  if(state == LOSS)
  {
    // this will draw the text centered in the play area
    p.drawText(QRect(0, 0, WIDTH, HEIGHT), Qt::AlignCenter, "Game over!");
  }
  else if(state == WIN)
  {
	p.drawText(QRect(0, 0, WIDTH, HEIGHT), Qt::AlignCenter, "You Win!");
  }
}

void BreakoutCanvas::timerTicked()
{
  // this will get called every 50 milliseconds

  // first, move the ball:
  if(goingRight)
  {
    ball.rx()++;
  }
  else
  {
    ball.rx()--;
  }

  if(goingDown)
  {
    ball.ry()++;
  }
  else
  {
    ball.ry()--;
  }

  // should the ball bounce?
  if(ball.x() + BALL_RADIUS >= WIDTH)
  {
    goingRight = false;
  }
  if(ball.x() - BALL_RADIUS <= 0)
  {
    goingRight = true;
  }
  if(ball.y() - BALL_RADIUS <= 0)
  {
    goingDown = true;
  }

  // ball bounces off and breaking blocks
  for(int i = 0; i < 10; i++)
  {
	 if(ball.y() - BALL_RADIUS <= PADDLE_HEIGHT &&
	  ball.x() >= blocks[i] &&
	  ball.x() <= blocks [i] + BLOCK_WIDTH &&
	  destroyed[i] == false)
	{
		goingDown = true;
		destroyed[i] = true;
	}
  }
  // but the player's paddle might not be -- check
  if(ball.y() + BALL_RADIUS >= HEIGHT - PADDLE_HEIGHT &&
     ball.x() >= playerX &&
     ball.x() <= playerX + PADDLE_WIDTH)
  {
    goingDown = false;
  }

  // move the computer's paddle:
  /*
  compX = ball.x() - PADDLE_WIDTH / 2;
  if(compX <= 0)
  {
    compX = 0;
  }
  if(compX + PADDLE_WIDTH >= WIDTH)
  {
    compX = WIDTH - PADDLE_WIDTH;
  }*/

  // move the player's paddle:
  if(paddleLeft)
  {
    playerX--;
  }
  if(paddleRight)
  {
    playerX++;
  }
  if(playerX <= 0)
  {
    playerX = 0;
  }
  if(playerX + PADDLE_WIDTH >= WIDTH)
  {
    playerX = WIDTH - PADDLE_WIDTH;
  }

  // did the player lose?
  if(ball.y() >= HEIGHT)
  {
    timer->stop();
    state = LOSS;
    needsButtonChange("Restart");
  }

  // did the player win?
  bool win = true;

  for( int i = 0; i < 10; i++)
  {
	  if(destroyed[i] == false)
		  win = false;
  }
  
  if( win == true)
  {
	timer->stop();
	state = WIN;
	needsButtonChange("Restart");
  }

  update(); // force a redraw
}

void BreakoutCanvas::keyPressEvent(QKeyEvent* event)
{
  if(event->key() == Qt::Key_Left)
  {
    paddleLeft = true;
  }
  if(event->key() == Qt::Key_Right)
  {
    paddleRight = true;
  }
}

void BreakoutCanvas::keyReleaseEvent(QKeyEvent*)
{
  paddleLeft = paddleRight = false;
}
