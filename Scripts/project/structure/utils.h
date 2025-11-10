#ifndef POINT_H
#define POINT_H

// content of the header file
class Point 
{
private:
    double x, y;
public:
    Point(double x = 0, double y = 0); // Constructor with default values
    double distanceTo(const Point& other) const; // Method to calculate distance to another point
};
// end of content of the header file

#endif