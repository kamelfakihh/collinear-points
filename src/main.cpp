#include "Point.h"
#include <iostream>

int main(){

    Point p1;
    Point p2;

    std::cin >> p1;
    std::cin >> p2;

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;

    std::cout << "slope : " << p1.slopeTo(p2) << std::endl;

    if(p1 > p2){
        std::cout << "p1 > p2" << std::endl;
    }else if(p1 < p2){
        std::cout << "p1 < p2" << std::endl;
    }else{
        std::cout << "p1 = p2" << std::endl;
    }

}