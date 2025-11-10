#include <iostream>
#include "utils.h"

int main()
{
    Point p1(3.0, 4.0);
    Point p2(0.0, 0.0);
    double dst = p1.distanceTo(p2);
    std::cout << "Distance between points: " << dst << std::endl;
}