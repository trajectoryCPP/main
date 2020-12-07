#ifndef WORLDPOINT_H
#define WORLDPOINT_H

#endif

class WorldPoint
{
public:
    WorldPoint() = default;
    WorldPoint(double x, double y, double z);
    double getX();
    double getY();
    double getZ();

private:
    double xCoord;
    double yCoord;
    double zCoord;
};