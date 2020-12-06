
#include "WorldPoint.h"

WorldPoint::WorldPoint(double x, double y, double z)
{
    this->xCoord = x;
    this->yCoord = y;
    this->zCoord = z;
}

double WorldPoint::getXCoord()
{
    return xCoord;
}

double WorldPoint::getYCoord()
{
    return yCoord;
}

double WorldPoint::getZCoord()
{
    return zCoord;
}

void WorldPoint::setXCoord(double x)
{
    this->xCoord = x;
}

void WorldPoint::setYCoord(double y)
{
    this->yCoord = y;
}

void WorldPoint::setZCoord(double z)
{
    this->zCoord = z;
}
