
#include "WorldPoint.h"

WorldPoint::WorldPoint(double xPos, double yPos, double zPos)
{
  this->xPos = xPos;
  this->yPos = yPos;
  this->zPos = zPos;
}

double WorldPoint::getXPos() { return xPos; }
double WorldPoint::getYPos() { return yPos; }
double WorldPoint::getZPos() { return zPos; }