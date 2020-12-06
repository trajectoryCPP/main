#include <iostream>
// #include "WorldPoint.h"
#include "Volume.h"
#include <eigen3/Eigen/Dense>

int main()
{
	//create instance of the class WorldPoint and use some getters
	// WorldPoint q = WorldPoint(1, 2, 3);
	// std::cout << "X coordinate of world point is " << q.getXCoord() << std::endl;
	// std::cout << "Y coordinate of world point is " << q.getYCoord() << std::endl;
	// std::cout << "Z coordinate of world point is " << q.getZCoord() << std::endl;

	// //set new x coordinate
	// q.setXCoord(4);
	// std::cout << "new X coordinate of world point is " << q.getXCoord() << std::endl;

	Eigen::MatrixXd m(6,3);
  m(0,0) = -1;
  m(1,0) = -1;
  m(2,1) = -1;
  m(3,1) = -1;
  m(4,2) = -1;
  m(5,2) = -1;

  Eigen::MatrixXd b(6,1);
  b(1,0) = 1;
  b(3,0) = 1;
  b(5,0) = 1;

  Eigen::MatrixXd q(3,1);
  q(0,0) = .5;
  q(1,0) = .5;
  q(2,0) = .5;

  Volume vol = Volume(m,b);
  std::cout << q << "\n is in box " << vol.contains(q)  << std::endl;

}