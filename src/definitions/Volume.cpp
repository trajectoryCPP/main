#include "WorldPoint.h"
#include "Volume.h"

Volume::Volume(WorldPoint X [6], double B [6])
{
    this->hpMatrix = X;
    this->bVector = B;
}

WorldPoint Halfspace::getNormalVector()
{
    return normalVector;
}

double Halfspace::getB()
{
    return b;
}

void Halfspace::setNormalVector(WorldPoint q)
{
    this->normalVector = q;
}

void Halfspace::setB(double y)
{
    this->b = y;
}
