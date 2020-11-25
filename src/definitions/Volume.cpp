#include "WorldPoint.h"
#include "Volume.h"

Volume::Volume(std::vector<WorldPoint> X, std::vector<double> B)
{
    this->hpMatrix = X;
    this->bVector = B;
}

std::vector<WorldPoint> Volume::getHyperplaneMatrix()
{
    return hpMatrix;
}

std::vector<double> Volume::getBVector()
{
    return bVector;
}

void Volume::setHyperplaneMatrix(std::vector<WorldPoint> X)
{
    this->hpMatrix = X;
}

void Volume::setBVector(std::vector<double> B)
{
    this->bVector = B;
}

bool Volume::isIn(WorldPoint)
{
    // to determine if a point is in the volume, it must satisfy a system of inequalities w.r.t. the normal vectors of the hyperplanes that make up the hyperplane matrix
    // to do this, we take the inner-products of the coordinates of the point with the normal vectors of the normal vectors, and then compare those to the translation vectors in B (if the normal vector is at the origin, the translation vector would be the 0 vector)

    // to do: create a system for determining the appropriate inequalities for each hyperplane
}