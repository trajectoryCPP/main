#include "WorldPoint.h"
#include <vector>

class Volume
{
    public:
        // constructor
        Volume() = default;
        Volume(std::vector<WorldPoint> X, std::vector<double> B);
        // get methods;
        std::vector<WorldPoint> getHyperplaneMatrix();
        std::vector<double> getBVector();
        // set methods
        void setHyperplaneMatrix(std::vector<WorldPoint>);
        void setBVector(std::vector<double>);
        // method to check if a worldpoint is in the volume
        bool isIn(WorldPoint);

    private:
        std::vector<WorldPoint> hpMatrix;
        std::vector<double> bVector;
};