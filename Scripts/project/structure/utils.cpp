#include <cmath>
#include "utils.h"

Point::Point(double x, double y) : x(x), y(y) {}
double Point::distanceTo(const Point& other) const
{
    double dx = other.x - x;
    double dy = other.y - y;
    return std::sqrt(dx * dx + dy * dy);
}