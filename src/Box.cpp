#include "Box.h"

Box::Box(WorldPoint centroid, double boxWidth)
{
    numPlanes = 6;
    this->halfspaces.push_back(Halfspace(WorldPoint(-1, 0, 0), centroid.getXPos() - 0.5 * boxWidth));
    this->halfspaces.push_back(Halfspace(WorldPoint(1, 0, 0), centroid.getXPos() + 0.5 * boxWidth));
    this->halfspaces.push_back(Halfspace(WorldPoint(0, -1, 0), centroid.getYPos() - 0.5 * boxWidth));
    this->halfspaces.push_back(Halfspace(WorldPoint(0, 1, 0), centroid.getYPos() + 0.5 * boxWidth));
    this->halfspaces.push_back(Halfspace(WorldPoint(0, 0, -1), centroid.getZPos() - 0.5 * boxWidth));
    this->halfspaces.push_back(Halfspace(WorldPoint(0, 0, 1), centroid.getZPos() + 0.5 * boxWidth));
}
