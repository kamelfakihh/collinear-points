#ifndef LINE_SEGMENT_H
#define LINE_SEGMENT_H

#include "Point.h"

class LineSegment {

public: 

    LineSegment(Point p1, Point p2);
    LineSegment();

    // returns slope of the line
    double slope();

    // return the length^2 of the segment
    double len_squared();

    // outputs this point coordinates
    friend std::ostream &operator<<(std::ostream &output, LineSegment &S);
    // inputs a new points coordinates
    friend std::istream &operator>>(std::istream &input, LineSegment &S);

    // lines are compared by there slope,
    // only the less than operator is used in the sorting implementation
    bool operator<(LineSegment L);
    bool operator==(LineSegment L);

private:

    Point p1,p2;
    double s;       // slope
};

#endif