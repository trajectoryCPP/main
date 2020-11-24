#include "Worldpoint.h"

class Volume
{
    public:
        Volume(class hyperplaneMatrix, double translationsVector [6]);
        // ~Volume();
        hyperplaneMatrix getHyperplaneMatrix();
        double getTranslationsVector();
        bool isIn(WorldPoint q);


        void setHyperplaneMatrix(hyperplaneMatrix);
        void setTranslationsVector(double x);

    private:
        class hyperplaneMatrix;
        double translationsVector [6];
};