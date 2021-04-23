#include "Point.h"
#include "LineSegment.h"
#include "CollinearPoints.h"
#include "Sort.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <list>

#define n 100

int main(){

    std::ifstream input("input.txt", std::ios::in);
    std::list<LineSegment> segments{};
    Point* points;
    double x,y;
    int nb, i=0;;

    if(input.is_open()){

        input >> nb;
        points = new Point[nb];

        while(input >> x >> y){
            points[i] = Point(x,y);
            i++;
        }

        FastCollinearPoints(points, segments, nb);

        for (auto &item : segments) {
            std::cout << item << std::endl;
        }

    }else{
        std::cout << "failed to open file!" << std::endl;
    }


    // for(std::list<LineSegment>::iterator it = segments.begin(); it != segments.end(), ++it){
    //     std::cout << it << std::endl;
    // }


    return 0;
}