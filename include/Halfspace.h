#ifndef HALFSPACE_H
#define HALFSPACE_H

#endif

#include "WorldPoint.h"
// #include <eigen3/Eigen/Dense>

class Halfspace
{
    public:
        Halfspace() = default;
        Halfspace(WorldPoint inwardNormal, double displacement);
        Halfspace(WorldPoint inwardNormal, WorldPoint pointOnPlane);
        Eigen::Vector3d getOutwardNormal();
        double getDisplacement();

        // void setNormalVector(WorldPoint x);
        // void setB(double y);

    private:
        Eigen::Vector3d outwardNormal;
        double displacement;
};