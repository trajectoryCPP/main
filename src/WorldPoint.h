
class WorldPoint
{
    public:
        WorldPoint(double x, double y, double z);
        double getXPos();
        double getYPos();
        double getZPos();

        void setXPos(double x);
        void setYPos(double y);
        void setZPos(double z);

    private:  
        double xPos;
        double yPos;
        double zPos;
};