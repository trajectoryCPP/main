#include "WorldPoint.h"
#include "Volume.h"

Volume::Volume(Eigen::MatrixXd X, Eigen::MatrixXd B)
{
    this->hpMatrix = X;
    this->bVector = B;
}

Eigen::MatrixXd Volume::getHyperplaneMatrix()
{
    return hpMatrix;
}

Eigen::MatrixXd Volume::getBVector()
{
    return bVector;
}

void Volume::setHyperplaneMatrix(Eigen::MatrixXd X)
{
    this->hpMatrix = X;
}

void Volume::setBVector(Eigen::MatrixXd B)
{
    this->bVector = B;
}

bool Volume::contains(Eigen::MatrixXd q)
{
    bool result = true;
    for (int i = 0; i < hpMatrix.rows(); i++)
    {
	    if( (hpMatrix*q)(i,0) > bVector(i,0) )
	    {
	        result = false;
		    break;
	    }
    }
    return result;
}