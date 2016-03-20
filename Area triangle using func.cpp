//area of triangle using functions

#include <stdlib.h>
#include <iostream>
#include <math.h>

double area_of_triangle(double a, double b, double c)
using namespace std;

int main() {
double a, b, c;
cout << "Length of side a: ";
cin >> a;
cout << "Length of side b: ";
cin >> b;
cout << "Lenfth of side c: ";
cin >> c;

cout << "The area of the triangle is " << area_of_triangle(a, b, c) << endl;

return 1;
}

double area_of_triangle(double a, double b, double c) {
double s = (a + b + c) / 2;
return sqrt(s * fabs(s - a) * fabs(s - b) * fabs(s - c));
}
