#include "WorldPoint.h"
#include <vector>

class Volume
{
    public:
        // constructor
        Volume() = default;
        Volume(std::vector<WorldPoint> X, std::vector<double> B);
        // methods;
        std::vector<WorldPoint> getHyperplaneMatrix();
        std::vector<double> getTranslationsVector();
        bool isIn(WorldPoint);


        void setHyperplaneMatrix(std::vector<WorldPoint>);
        void setTranslationsVector(double [6]);

    private:
        std::vector<WorldPoint> hpMatrix;
        std::vector<double> bVector;
};