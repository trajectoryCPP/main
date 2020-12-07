#include <iostream>
#include "Volume.h"

int main()
{
  WorldPoint normals[6];
  normals[0] = WorldPoint(-1, 0, 0);
  normals[1] = WorldPoint(1, 0, 0);
  normals[2] = WorldPoint(0, -1, 0);
  normals[3] = WorldPoint(0, 1, 0);
  normals[4] = WorldPoint(0, 0, -1);
  normals[5] = WorldPoint(0, 0, 1);

  double d[6] = {0, 1, 0, 1, 0, 1};

  std::vector<Halfspace> halfspaces;
  for (int i = 0; i < 6; i++)
  {
    halfspaces.push_back(Halfspace(normals[i], d[i]));
  }

  // construct the box cut out by the six halfspaces above
  Volume vol = Volume(halfspaces);

  WorldPoint q1 = WorldPoint(.25, .25, .25);
  WorldPoint q2 = WorldPoint(.5, .5, .5);
  WorldPoint q3 = WorldPoint(1, 1, 1);

  // all three points are contained in box
  std::cout << "q1 is in box " << vol.contains(q1) << std::endl;
  std::cout << "q2 is in box " << vol.contains(q2) << std::endl;
  std::cout << "q3 is in box " << vol.contains(q3) << std::endl;

  Halfspace H = Halfspace(WorldPoint(1, 1, 1), 1); // intersect with the half space x+y+z <= 1
  vol.intersectHalfspace(H);

  //now some points are not in the smaller volume
  std::cout << "q1 is in box " << vol.contains(q1) << std::endl;
  std::cout << "q2 is in box " << vol.contains(q2) << std::endl; // becomes false
  std::cout << "q3 is in box " << vol.contains(q3) << std::endl; // becomes false
}