#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:

    // Constructor...

    Point(double initialX = 0, double initialY = 0) : x(initialX), y(initialY) {}

    // Getter and Setter for x-coordinate...

    double getX() const 
    {
        return x;
    }

    void setX(double newX)
    {
        x = newX;
    }

    // Getter and Setter for y-coordinate...

    double getY() const
    {
        return y;
    }

    void setY(double newY)
    {
        y = newY;
    }

    // Methods to calculate distance to another point...

    double distance(const Point& otherPoint) const
    {
        double dx = x - otherPoint.getX();
        double dy = y - otherPoint.getY();
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    
    Point point1(2, 4);
    Point point2(4, 6);

    cout << "Distance between Point-1 and Point-2: " << point1.distance(point2) << endl;

    return 0;
}
