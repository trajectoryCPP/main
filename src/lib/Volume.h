#include "WorldPoint.h"

class Volume
{
    public:
        Volume(WorldPoint hpMatrix [6], double bVector [6]);
        // ~Volume();
        WorldPoint getHyperplaneMatrix();
        double getTranslationsVector();
        bool isIn(WorldPoint);


        void setHyperplaneMatrix(WorldPoint [6]);
        void setTranslationsVector(double [6]);

    private:
        WorldPoint hpMatrix [6];
        double bVector [6];
};