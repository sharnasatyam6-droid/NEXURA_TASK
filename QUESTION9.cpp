#include <iostream>
using namespace std;

int main()
{
    int startingyear, endingyear, year;
    cout << "Enter your starting year: ";
    cin >> startingyear;
    cout << "Enter your ending year: ";
    cin >> endingyear;
    cout << "The leap years between years " << startingyear << " and " << endingyear << " are ";
    for (year = startingyear; year <= endingyear; year++)
    {
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << ", ";
        }
    }
    return 0;
}