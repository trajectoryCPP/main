
#include "WorldPoint.h"

WorldPoint::WorldPoint(double x, double y, double z)
{
  this->xCoord = x;
  this->yCoord = y;
  this->zCoord = z;
}

double WorldPoint::getX() { return xCoord; };
double WorldPoint::getY() { return yCoord; };
double WorldPoint::getZ() { return zCoord; };
