#include "Point.h"
#include "LineSegment.h"
#include <iostream>

int main(){

    Point p1;
    Point p2;

    std::cin >> p1;
    std::cin >> p2;

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;

    if(p1 > p2){
        std::cout << "p1 > p2" << std::endl;
    }else if(p1 < p2){
        std::cout << "p1 < p2" << std::endl;
    }else{
        std::cout << "p1 = p2" << std::endl;
    }

    LineSegment S1 = LineSegment(p1, p2);

    std::cout << S1 << std::endl;
    std::cout << "slope : " << S1.Slope() << std::endl;
}