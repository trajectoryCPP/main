#include "Volume.h"

Volume::Volume(Eigen::MatrixXd normals, Eigen::MatrixXd displacements) {
  this->outwardNormalMatrix = normals;
  this->displacements = displacements;
}

Eigen::MatrixXd Volume::getOutwardNormalMatrix() { return outwardNormalMatrix; }

Eigen::MatrixXd Volume::getDisplacements() { return displacements; }

void Volume::intersectHalfspace(Halfspace& H){
  // add the outward normal of the halfspace to the matrix of normals
  outwardNormalMatrix.conservativeResize(outwardNormalMatrix.rows()+1, Eigen::NoChange);
  // outwardNormalMatrix.row(outwardNormalMatrix.rows()-1) = H.getOutwardNormal();
  
  // add the displacement to matrix of displacements
  displacements.conservativeResize(displacements.rows()+1, Eigen::NoChange);
  // displacements.row(displacements.rows()-1) << H.getDisplacement();

}

bool Volume::contains(WorldPoint q) {
  bool result = true;
  for (int i = 0; i < outwardNormalMatrix.rows(); i++) {
    if ((outwardNormalMatrix * q.getMatrixRep())(i, 0) > displacements(i, 0)) {
      result = false;
      break;
    }
  }
  return result;
}