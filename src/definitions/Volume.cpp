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
    
}