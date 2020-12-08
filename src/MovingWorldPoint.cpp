#include "MovingWorldPoint.h"


MovingWorldPoint::MovingWorldPoint(double xPos, double yPos, double zPos, double xVel, double yVel, double zVel){
    this->xPos = xPos;
    this->yPos = yPos;
    this->zPos = zPos;
    this->xVel = xVel;
    this->yVel = yVel;
    this->zVel = zVel;
}

 void MovingWorldPoint::stepForward(double dist){
     xPos = xPos + dist * xVel;
     yPos = yPos + dist * yVel;
     zPos = zPos + dist * zVel;
 }

void MovingWorldPoint::setTrajectory(double newXVel, double newYVel, double newZVel){
    xVel = newXVel;
    yVel = newYVel;
    zVel = newZVel;
}
       
