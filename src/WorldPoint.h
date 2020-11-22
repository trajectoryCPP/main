
class WorldPoint
{
    public:
        WorldPoint(double x, double y, double z);
        // ~WorldPoint();
        double getXCoord();
        double getYCoord();
        double getZCoord();

    private:
        double xCoord;
        double yCoord;
        double zCoord;
};