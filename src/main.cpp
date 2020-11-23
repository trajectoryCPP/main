#include <iostream>
#include "WorldPoint.h"

int main()
{
	//create instance of the class WorldPoint and use some getters
	WorldPoint q = WorldPoint(1, 2, 3);
	std::cout << "X coordinate of world point is " << q.getXCoord() << std::endl;
	std::cout << "Y coordinate of world point is " << q.getYCoord() << std::endl;
	std::cout << "Z coordinate of world point is " << q.getZCoord() << std::endl;

	//set new x coordinate
	q.setXCoord(4);
	std::cout << "new X coordinate of world point is " << q.getXCoord() << std::endl;

}