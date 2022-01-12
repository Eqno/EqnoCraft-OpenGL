#ifndef VIEW_H
#define VIEW_H

#include "config.h"
#include "coord.h"

class View: public Coord
{
public:
    static constexpr int INIT_DISTANCE = 20;
    static constexpr double INIT_HEIGHT = 1, MOVE_FACTOR = 0.1, INIT_ROTATE_RAD = 5,
        INIT_COLL_RAD = 0.5, ROTATE_FACTOR_X = 2.5, ROTATE_FACTOR_Y = 1.4;
    // double x, y, z, r;
    double distance, rotateRad, rotateX, rotateY, lastRotateX, lastRotateY;
    bool movingForward, movingBackward, movingLeftward, movingRightward;
    View();
    void updatePos();
    void updateAng();
    void updateRotate(double &viewRotate, double coord, double &lastRotate, double viewMoveFac);
    void show() const;
};
void lockMousePos();

#endif