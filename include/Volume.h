#include <vector>
#include <eigen3/Eigen/Dense>

class Volume
{
    public:
        // constructor
        Volume() = default;
        Volume(Eigen::MatrixXd X, Eigen::MatrixXd B);
        // get methods;
        Eigen::MatrixXd getHyperplaneMatrix();
        Eigen::MatrixXd getBVector();
        // set methods
        void setHyperplaneMatrix(Eigen::MatrixXd);
        void setBVector(Eigen::MatrixXd);
        // method to check if a worldpoint is in the volume
        bool contains(Eigen::MatrixXd);

    private:
        Eigen::MatrixXd hpMatrix;
        Eigen::MatrixXd bVector;
    
};