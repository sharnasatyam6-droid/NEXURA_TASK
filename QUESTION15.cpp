#include <iostream>
using namespace std;

int main()
{
    int num;
    long long factorial = 1;

    cout << "Enter the number to find the factorial: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else if (num == 0)
    {
        cout << "The factorial of 0 is 1";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
        cout << "The factorial of " << num << " is " << factorial;
    }

    return 0;
}