#include "CollinearPoints.h"
#include "Sort.h"
#include "Sort.cpp"
#include "Point.h"
#include "LineSegment.h"

#include <list>
#include <iostream>

void FastCollinearPoints (Point* points, std::list<LineSegment> &segments, int n){

    // copy points to an auxiliary array to be able to sort them
    Point *p = new Point[n];
    for(int i=0; i<n; i++) p[i] = points[i];

    // sort the points
    sort<Point>(p, 0, n-1);

    LineSegment *s = new LineSegment[n-1];      // array to store all Linesegments from one point to other points
    int count;                                  // temp variable used to count the number of consecutive lines with equal slopes

    for(int i=0; i<n; i++){

        // choose point p[i] as an origin
        // find all segments from point p[i] to other points
        for(int j=0, k=0; j<n; j++){
            if(i!=j){
                s[k] = LineSegment(p[i], p[j]);
                k++;
            }
        }

        // sort segments
        sort<LineSegment>(s, 0, n-2);

        // check for adjacent lines with equal slopes
        for(int x=0, y=1; x < n-1; x++){           

            count = 0;

            while(s[x] == s[y] && y<n-1){
                count ++;
                y++;
            }

            if(count >= 3){
                segments.push_back(s[y-1]);
            }

            x = y-1;
        }       
    }
}