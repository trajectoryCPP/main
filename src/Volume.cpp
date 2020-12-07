#include "Volume.h"

Volume::Volume(std::vector<Halfspace> &halfspaces)
{
  this->halfspaces = halfspaces;
  numPlanes = halfspaces.size();
}

std::vector<WorldPoint> Volume::getOutwardNormals()
{
  std::vector<WorldPoint> outwardNormals(numPlanes);
  for (int i = 0; i < numPlanes; i++)
  {
    outwardNormals.at(i) = halfspaces.at(i).getOutwardNormal();
  }
  return outwardNormals;
}

std::vector<double> Volume::getDisplacements()
{
  std::vector<double> displacements(numPlanes);
  for (int i = 0; i < numPlanes; i++)
  {
    displacements.at(i) = halfspaces.at(i).getDisplacement();
  }
  return displacements;
}

void Volume::intersectHalfspace(const Halfspace &H)
{
  halfspaces.push_back(H);
  numPlanes += 1;
}

bool Volume::contains(WorldPoint q)
{
  bool result = true;
  //check whether q lies in each of the halfspaces which define the volume
  for (int i = 0; i < numPlanes; i++)
  {
    if (!halfspaces.at(i).contains(q))
    {
      result = false;
      break;
    }
  }
  return result;
}