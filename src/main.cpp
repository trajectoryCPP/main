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

  // construct q1 with position [1/4,1/4,1/4] and velocity [1,1,1]
  MovingWorldPoint q1 = MovingWorldPoint(.25, .25, .25,1,1,1);

  // q1 in box
  std::cout << "q1 is in box " << vol.contains(q1) << std::endl;

  // move q1 a step of size 1 in the direction of its velocity [1,1,1]
  q1.stepForward(1);

  // modified q1 no longer in box 
  std::cout << "q1 is in box " << vol.contains(q1) << std::endl;

  // retreat to the box
  q1.stepForward(-.5);

  // phew, a return to box safety
  std::cout << "q1 is in box " << vol.contains(q1) << std::endl;

  // oh no, someone chopped off half the box
  Halfspace H = Halfspace(WorldPoint(1, 1, 1), 1); // intersect with the half space x+y+z <= 1
  vol.intersectHalfspace(H);

  // again not in box
  std::cout << "q1 is in box " << vol.contains(q1) << std::endl;
  
}