#ifndef VOLUME_H
#define VOLUME_H

#endif

#include "Halfspace.h"
#include <eigen3/Eigen/Dense>


class Volume
{
    public:
        // constructor
        Volume() = default;
        Volume(Eigen::MatrixXd normals, Eigen::MatrixXd displacements);
        // get methods;
        Eigen::MatrixXd getOutwardNormalMatrix();
        Eigen::MatrixXd getDisplacements();
        // set methods
        void intersectHalfspace(Halfspace& H);
        // method to check if a worldpoint is in the volume
        bool contains(WorldPoint);

    private:
        Eigen::MatrixXd outwardNormalMatrix;
        Eigen::MatrixXd displacements;
    
};