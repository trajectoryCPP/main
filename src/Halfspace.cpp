
#include "Halfspace.h"

Halfspace::Halfspace(WorldPoint normalVector, double b)
{
    this->normalVector = normalVector;
    this->b = b;
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
