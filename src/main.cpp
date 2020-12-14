#include <iostream>
#include "Volume.h"
#include "Box.h"

int main()
{
  WorldPoint centroid = WorldPoint(.5, .5, .5);
  double boxWidth = 1;
  Box box = Box(centroid, boxWidth);

  // construct q1 with position [1/4,1/4,1/4] and velocity [1,1,1]
  MovingWorldPoint q1 = MovingWorldPoint(.25, .25, .25, 1, 1, 1);

  // q1 in box
  std::cout << "q1 is in box " << box.contains(q1) << std::endl;

  // move q1 a step of size 1 in the direction of its velocity [1,1,1]
  q1.stepForward(1);

  // modified q1 no longer in box
  std::cout << "q1 is in box " << box.contains(q1) << std::endl;

  // retreat to the box
  q1.stepForward(-.5);

  // phew, a return to box safety
  std::cout << "q1 is in box " << box.contains(q1) << std::endl;

  // oh no, someone chopped off half the box
  Halfspace H = Halfspace(WorldPoint(1, 1, 1), 1); // intersect with the half space x+y+z <= 1
  box.intersectHalfspace(H);

  // again not in box
  std::cout << "q1 is in box " << box.contains(q1) << std::endl;
}