#include "Worldpoint.h"

class Volume
{
    public:
        Volume(class hyperplaneMatrix, WorldPoint normalVector);
        // ~Volume();
        hyperplaneMatrix getHyperplaneMatrix();
        WorldPoint getNormalVector();


        void setHyperplaneMatrix(hyperplaneMatrix);
        void setNormalVector(double x);

    private:
        class hyperplaneMatrix;
        WorldPoint normalVector;
};