#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter your number of which you want the table ";
    cin >> num;
    for (i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
}