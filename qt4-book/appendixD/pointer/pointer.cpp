#include "point2d.h"

int main(){
    Point2D alpha;
    Point2D beta;
    Point2D *ptr;
    ptr = &alpha;
    ptr->setX(1.0);
    ptr->setY(2.5);
    ptr = &beta;
    ptr->setX(4.0);
    ptr->setY(4.5);
    ptr = 0;
    return 0;
}
