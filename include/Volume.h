#ifndef VOLUME_H
#define VOLUME_H

#include "Halfspace.h"
#include "MovingWorldPoint.h"
#include <vector>

class Volume
{
    public:
        // constructor
        Volume() = default;
        Volume(std::vector<Halfspace>& halfspaces );
        std::vector<WorldPoint> getOutwardNormals();
        std::vector<double> getDisplacements();
        void intersectHalfspace(const Halfspace& H); // intersect volume with additional halfspace
        bool contains(WorldPoint); //check whether worldpoint is in volume

    protected:
        int numPlanes = 0;
        std::vector<Halfspace> halfspaces;
        
};

#endif