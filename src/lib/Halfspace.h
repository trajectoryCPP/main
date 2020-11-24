#include "Worldpoint.h"

class Halfspace
{
    public:
        Halfspace(WorldPoint normalVector, double b);
        // ~Volume();
        WorldPoint getNormalVector();
        double getB();

        void setNormalVector(WorldPoint x);
        void setB(double y);

    private:
        WorldPoint normalVector;
        double b;
};