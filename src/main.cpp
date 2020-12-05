#include <iostream>
// #include "WorldPoint.h"
#include "Volume.h"
#include <eigen3/Eigen/Dense>

using namespace std;

int main()
{
  WorldPoint normals[6];
  normals[0] = WorldPoint(-1, 0, 0);
  normals[1] = WorldPoint(-1, 0, 0);
  normals[2] = WorldPoint(0, -1, 0);
  normals[3] = WorldPoint(0, -1, 0);
  normals[4] = WorldPoint(0, 0, -1);
  normals[5] = WorldPoint(0, 0, -1);

  double d[6] = {0, 1, 0, 1, 0, 1};

  WorldPoint q = WorldPoint(.5, .5, .5);

  // Eigen::MatrixXd m(6,3);
  // m(0,0) = -1;
  // m(1,0) = -1;
  // m(2,1) = -1;
  // m(3,1) = -1;
  // m(4,2) = -1;
  // m(5,2) = -1;

  // Eigen::MatrixXd b(6,1);
  // b(1,0) = 1;
  // b(3,0) = 1;
  // b(5,0) = 1;

  // Eigen::MatrixXd q(3,1);
  // q(0,0) = .5;
  // q(1,0) = .5;
  // q(2,0) = .5;

  // Volume vol = Volume(m,b);
  Volume vol;
  for (int i = 0; i < 6 ; i++)
  {
    Halfspace H = Halfspace(normals[i], d[i]);
    vol.intersectHalfspace(H);
  }

  cout << "q is in box " << vol.contains(q) << endl;
}