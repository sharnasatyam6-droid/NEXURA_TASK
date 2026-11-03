#include <iostream>
using namespace std;

int main()
{
    int num, sum;
    cout << "Enter the number till which you want to find the sum ";
    cin >> num;
    sum = num * (num + 1) / 2;
    cout << "The sum of the natural numbers is " << sum;
    return 0;
}