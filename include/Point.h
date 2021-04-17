#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {

public:

    Point();
    // Point(const Point &P);
    Point(double x, double y);

    // returns the slope between this point and point P
    double slopeTo(Point P);

    // it compares two points (this and P) by y-coordinate, breaking ties by x-coordinate.
    // the invoking point (x0, y0) is less than the argument point
    // (x1, y1) if and only if either y0 < y1 or if y0 = y1 and x0 < x1
    // returns -1,0,1 for smaller, equal and larger respectively 
    int compareTo(Point P);

    // outputs this point coordinates
    friend std::ostream &operator<<(std::ostream &output, Point &P);
    // inputs a new points coordinates
    friend std::istream &operator>>(std::istream &input, Point &P);

    // operator overloading using compareTo() method
    bool operator>(Point P);
    bool operator<(Point P);
    bool operator>=(Point P);
    bool operator<=(Point P);
    bool operator==(Point P);
    bool operator!=(Point P);

private:

    double x,y;
};

#endif