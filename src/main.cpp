#include <iostream>
#include "WorldPoint.h"
#include <eigen3/Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
	WorldPoint q = WorldPoint(1, 2, 3);
	std::cout << "X coordinate of world point is " << q.getXCoord() << std::endl;
	std::cout << "Y coordinate of world point is " << q.getYCoord() << std::endl;
	std::cout << "Z coordinate of world point is " << q.getZCoord() << std::endl;

	// MatrixXd m = MatrixXd::Random(3, 3);
    // cout << "m =" << endl << m << endl;

	// m = (m + MatrixXd::Constant(3, 3, 1.2));
	// cout << "m =" << endl << m << endl;
	// VectorXd v(3);
	// v << 1, 2, 3;
	// cout << "m * v =" << endl << m * v << endl;

}