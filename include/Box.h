#ifndef BOX_H
#define BOX_H

#include "Volume.h"

class Box : public Volume{

    public:
        Box(WorldPoint centroid, double boxWidth);

};

#endif