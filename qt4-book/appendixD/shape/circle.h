#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape{
public:
    Circle(Point2D center, double radius = 0.5)
    : Shape(center) {
        myRadius = radius;
    }

    void draw() {
        // do something here
    }

private:
    double myRadius;
};

#endif
