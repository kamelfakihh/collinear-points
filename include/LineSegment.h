#ifndef LINE_SEGMENT_H
#define LINE_SEGMENT_H

#include "Point.h"

class LineSegment {

public: 

    LineSegment(Point p1, Point p2);

    // returns slope of the line
    double Slope();

    // outputs this point coordinates
    friend std::ostream &operator<<(std::ostream &output, LineSegment &S);
    // inputs a new points coordinates
    friend std::istream &operator>>(std::istream &input, LineSegment &S);

private:

    Point p1,p2;
};

#endif