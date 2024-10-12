#include <iostream>
#include <cmath> // M_PI & sqrt
using namespace std;
// Function prototypes
double area(double side);
double area(double length, double width);
double area(double radius, bool isCircle);
double area(double a, double b, double c);

int main() {
    double side = 4.0;
    cout << "Area of a square with a side " << side << " = " << area(side) << endl;

    double length = 5.0, width = 3.0;
    cout << "Area of a rectangle with sides " << length << " and " << width << " = " << area(length, width) << endl;

    double radius = 2.5;
    cout << "Area of a circle with radius " << radius << " = " << area(radius, true) << endl;

    double a = 3.0, b = 4.0, c = 5.0;
    cout << "Area of a triangle with sides " << a << ", " << b << " and " << c << " = " << area(a, b, c) << endl;

    return 0;
}

// Area of a square
double area(double side) {
    return side * side;
}

// Area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Area of a circle
double area(double radius, bool isCircle) {
    return M_PI * radius * radius;
}

// Area of a triangle given its three sides (according to Heron's formula)
double area(double a, double b, double c) {
    double s = (a + b + c) / 2; // semiperimeter
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
