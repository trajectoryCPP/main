#ifndef WORLDPOINT_H
#define WORLDPOINT_H

#endif

#include <eigen3/Eigen/Dense>

class WorldPoint
{
    public:
        WorldPoint() = default;
        WorldPoint(double x, double y, double z);
        Eigen::Vector3d getMatrixRep();
        // double getXCoord();
        // double getYCoord();
        // double getZCoord();

        // void setXCoord(double x);
        // void setYCoord(double y);
        // void setZCoord(double z);

    private:
        Eigen::Vector3d matrixRep;

};