#ifndef MOVING_WORLD_POINT_H
#define MOVING_WORLD_POINT_H

#include "WorldPoint.h"

class MovingWorldPoint : public WorldPoint{

    public:
        MovingWorldPoint();
        MovingWorldPoint(double xPos, double yPos, double zPos, double xVel, double yVel, double zVel);
        void setTrajectory(double newXVel, double newYVel, double newZVel);
        void stepForward(double dist);
    
    private:
        double xVel;
        double yVel;
        double zVel;

};

#endif