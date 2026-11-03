#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char Operation;
    cout << "Enter you number 1:";
    cin >> num1;
    cout << "Enter you number 2:";
    cin >> num2;
    cout << "Choose and Arthimetic Operation" << endl;
    cout << "A for Addition" << endl
         << "S for Subtraciton" << endl
         << "M for multiplication" << endl
         << "D for division";
    cin >> Operation;
    switch (Operation)
    {
    case 'A':
    case 'a':
        cout << "The addition of the numbers " << num1 << " and" << num2 << " is " << num1 + num2;
        break;

    case 'S':
    case 's':
        cout << "The subtraction of the numbers " << num1 << " and" << num2 << " is " << num1 - num2;
        break;

    case 'M':
    case 'm':
        cout << "The product of the numbers " << num1 << " and" << num2 << " is " << num1 * num2;
        break;

    case 'D':
    case 'd':
        if (num2 == 0)
        {
            cout << "Division by Zero is not allowed";
        }
        else
        {
            cout << "The division of the two numbers " << num1 << " and " << num2 << " is " << (float)num1 / num2;
        }
        break;

    default:
        cout << "invalid choice! Please select A, S, D or M";
        break;
    }

    return 0;
}