
#include "WorldPoint.h"

WorldPoint::WorldPoint(double x, double y, double z) {
  this->matrixRep(0) = x;
  this->matrixRep(1) = y;
  this->matrixRep(2) = z;
}

Eigen::Vector3d WorldPoint::getMatrixRep() { return matrixRep; }

// void WorldPoint::setXCoord(double x) { this->xCoord = x; }

// void WorldPoint::setYCoord(double y) { this->yCoord = y; }

// void WorldPoint::setZCoord(double z) { this->zCoord = z; }
