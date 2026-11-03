#include <iostream>
using namespace std;

int main()
{
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area;
    area = 3.14 * radius * radius;
    cout << "The area of the circle with the radius " << radius << " is " << area;
    return 0;
}