#include "LineSegment.h"
#include <iostream>

LineSegment::LineSegment(Point p1, Point p2)
 : p1(p1), p2(p2) {}

double LineSegment::Slope(){

    return p1.slopeTo(p2);
}

std::ostream &operator<<(std::ostream &output, LineSegment &S){

    output << S.p1 << " -> " << S.p2;
    return output;
}

std::istream &operator>>(std::istream &input, LineSegment &S){

    input >> S.p1 >> S.p2;
    return input;
}
