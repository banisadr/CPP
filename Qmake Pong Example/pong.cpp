/* File: pong.cpp
   Author: Richard Eisenberg (eir@cis)
   Desc: Defines the Pong game
*/

#include <QtGui>
#include "pong.h"
#include "pong_canvas.h"

Pong::Pong()
{
  setWindowTitle("Pong!");

  // there are only two widgets, and they're stacked vertically
  QVBoxLayout* layout = new QVBoxLayout(this);
  canvas = new PongCanvas(this);
  layout->addWidget(canvas);

  controlButton = new QPushButton("Start", this);
  layout->addWidget(controlButton);

  // the button directly controls the canvas
  connect(controlButton, SIGNAL(clicked()), canvas, SLOT(buttonPress()));

  // the canvas can control the button
  connect(canvas, SIGNAL(needsButtonChange(QString)),
	  this, SLOT(changeButtonText(QString)));
}

void Pong::changeButtonText(QString str)
{
  controlButton->setText(str);
}
