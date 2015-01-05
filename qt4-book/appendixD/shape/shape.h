#ifndef SHAPE_H
#define SHAPE_H

#include "point2d.h"

class Shape{
public:
    Shape(Point2D center) { myCenter = center; }
    virtual void draw() = 0;
protected:
    Point2D myCenter;
};

#endif
