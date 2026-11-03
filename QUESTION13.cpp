#include <iostream>
using namespace std;

int main()
{
    int startnum, endnum, num;
    cout << "Enter your starting number: ";
    cin >> startnum;
    cout << "Enter your ending number: ";
    cin >> endnum;
    cout << "Even numbers in the range " << startnum << " - " << endnum << " are ";
    for (num = startnum; num <= endnum; num++)
    {
        if (num % 2 == 0)
            cout << num << " ,";
    }
    return 0;
}