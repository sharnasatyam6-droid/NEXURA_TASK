#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    cout << "Enter your number 1: ";
    cin >> num1;
    cout << "Enter your number 2: ";
    cin >> num2;
    cout << "Enter your number 3: ";
    cin >> num3;
    cout << "Enter your number 4: ";
    cin >> num4;
    if ((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        cout << num1 << "is the largest amoung the following ";
    }
    else if ((num2 > num1) && (num2 > num3) && (num2 > num4))
    {
        cout << num2 << "is the largest amoung the following ";
    }
    else if ((num3 > num1) && (num3 > num2) && (num3 > num4))
    {
        cout << num3 << "is the largest amoung the following ";
    }
    else
    {
        cout << num4 << " is the largest amoung the following ";
    }
    return 0;
}