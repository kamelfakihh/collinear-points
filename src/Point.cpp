#include "Point.h"
#include <iostream>
#include <iomanip>

Point::Point(double x, double y) 
 : x(x), y(y) {}

Point::Point() 
 : x(0.0), y(0.0) {}

// Point::Point(const Point &P) 
//  : x(P.x), y(P.y) {}

double Point::slopeTo(Point P){

    return (this->y - P.y) / (this->x - P.x);
}

double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}

int Point::compareTo(Point P){

    // check if one of the points has a higher y-coordinate
    if(this->y > P.y) return 1;
    if(this->y < P.y) return -1;

    // if they both have the same y-coordinate,
    // we compare the x-coordinate
    if(this->x > P.x) return 1;
    if(this->x < P.x) return -1;

    // return zero of both coordinates are equal
    return 0;
}

// comparison operators overloading using compareTo() method

bool Point::operator>(Point P){
    return (this->compareTo(P) == 1);
}

bool Point::operator<(Point P){
    return (this->compareTo(P) == -1);
}

bool Point::operator==(Point P){
    return (this->compareTo(P) == 0);
}

bool Point::operator>=(Point P){
    return ((*this > P) || (*this == P));
}

bool Point::operator<=(Point P){
    return ((*this < P) || (*this == P));
}

bool Point::operator!=(Point P){
    return !(*this == P);
}

std::ostream &operator<<(std::ostream &output, Point &P){

    output << std::setprecision(3) << "(" << P.x << ", " << P.y << ")";
    return output;
}

std::istream &operator>>(std::istream &input, Point &P){

    std::cout << "enter point coordinates (space seperated) : ";
    input >> P.x >> P.y;
    return input;
}