#ifndef WORLDPOINT_H
#define WORLDPOINT_H

class WorldPoint
{
public:
    WorldPoint() = default;
    WorldPoint(double xPos, double yPos, double zPos);
    double getXPos();
    double getYPos();
    double getZPos();

protected:
    double xPos;
    double yPos;
    double zPos;
};

#endif