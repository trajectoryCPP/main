
class WorldPoint
{
    public:
        WorldPoint(double x, double y, double z);
        // ~WorldPoint();
        double getXCoord();
        double getYCoord();
        double getZCoord();

        void setXCoord(double x);
        void setYCoord(double y);
        void setZCoord(double z);

    private:  
        double xCoord;
        double yCoord;
        double zCoord;
};