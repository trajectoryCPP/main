
#include "Halfspace.h"

Halfspace::Halfspace(WorldPoint outwardNormal, double displacement)
{
    this->outwardNormal = - outwardNormal.getMatrixRep();
    this->displacement = displacement;
}

Eigen::Vector3d Halfspace::getOutwardNormal()
{
    return outwardNormal;
}

double Halfspace::getDisplacement()
{
    return displacement;
}

