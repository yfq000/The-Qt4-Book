#include "point2d.h"

int main(){
    Point2D alpha;
    Point2D beta(0.666,0.875);

    alpha.setX(beta.y());
    beta.setY(alpha.x());

    return 0;
}
