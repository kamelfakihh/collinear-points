#ifndef COLLINEAR_POINTS_H
#define COLLINEAR_POINTS_H

#include "Point.h"
#include "LineSegment.h"

#include <list>

void FastCollinearPoints (Point points[], std::list<LineSegment> &segments, int number_of_points);

#endif