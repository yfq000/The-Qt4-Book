#ifndef POINT2D_H
#define POINT2D_H

class Point2D{
public:
    Point2D();
    Point2D(double x, double y);
    void setX(double x);
    void setY(double y);
    double x() const;
    double y() const;

private:
    double xVal;
    double yVal;
};

#endif
