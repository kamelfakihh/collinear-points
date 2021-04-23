#include "Point.h"
#include "LineSegment.h"
#include "CollinearPoints.h"
#include "Sort.h"

#include <iostream>
#include <fstream>
#include <list>

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

    return 0;
}