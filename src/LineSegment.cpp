#include "LineSegment.h"
#include <iostream>
#include <cmath>

LineSegment::LineSegment(Point p1, Point p2)
 : p1(p1), p2(p2) {
    s = p1.slopeTo(p2);
}

LineSegment::LineSegment()
 : p1(), p2() {
    s = p1.slopeTo(p2);
}


double LineSegment::slope(){

    return s;
}

double LineSegment::len_squared(){

    return std::pow(p1.getX() + p2.getX(),2) + std::pow(p1.getY() + p2.getY(), 2);
}


bool LineSegment::operator<(LineSegment L){

    // linesegments are first compared using their slopes then their length if slopes are equal
    if (this->slope() < L.slope()) return true;
    
    if (this->slope() == L.slope()){
        if(this->len_squared() < L.len_squared()){
            return true;
        }
    }

    return false;
}

bool LineSegment::operator==(LineSegment L){
    
    double s1 = this->slope();
    double s2 = L.slope();
    return (s1 == s2) || ( std::abs(s1) == INFINITY && std::abs(s2) == INFINITY);
}

std::ostream &operator<<(std::ostream &output, LineSegment &S){

    output << S.p1 << " -> " << S.p2;
    return output;
}

std::istream &operator>>(std::istream &input, LineSegment &S){

    input >> S.p1 >> S.p2;
    return input;
}
