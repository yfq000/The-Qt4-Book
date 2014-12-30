#include "point2d.h"

Point2D::Point2D(){
    xVal = 0.0;
    yVal = 0.0;
}

Point2D::Point2D(double x, double y){
    xVal = x;
    yVal = y;
}

void Point2D::setX(double x){
    xVal = x;
}

void Point2D::setY(double y){
    yVal = y;
}

double Point2D::x() const{
    return xVal;
}

double Point2D::y() const{
    return yVal;
}
