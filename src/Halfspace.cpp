#include "Halfspace.h"

Halfspace::Halfspace(WorldPoint outwardNormal, double displacement)
{
    this->outwardNormal = outwardNormal;
    this->displacement = displacement;
}

WorldPoint Halfspace::getOutwardNormal()
{
    return outwardNormal;
}

double Halfspace::getDisplacement()
{
    return displacement;
}

bool Halfspace::contains(WorldPoint q)
{
    bool result;
    double dotProduct = outwardNormal.getX() * q.getX() + outwardNormal.getY() * q.getY() + outwardNormal.getZ() * q.getZ();
    if (dotProduct <=  displacement){
        result = true;
    }
    else {
        result = false;
    }
    return result;
}
