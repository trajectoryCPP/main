#ifndef HALFSPACE_H
#define HALFSPACE_H

#include "WorldPoint.h"

class Halfspace
{
    public:
        Halfspace() = default;
        Halfspace(WorldPoint outwardNormal, double displacement);
        Halfspace(WorldPoint outwardNormal, WorldPoint pointOnPlane);
        WorldPoint getOutwardNormal();
        double getDisplacement();
        bool contains(WorldPoint q);


    private:
        WorldPoint outwardNormal;
        double displacement;
};


#endif