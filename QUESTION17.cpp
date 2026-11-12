#include <iostream>
using namespace std;

int main()
{
  int num;
  int count = 0;
  cout << "Enter your number: ";
  cin >> num;
  if (num <= 1)
  {
    cout << num << " is neither composite nor prime";
  }
  else
  {
    for (int i = 1; i <= num; i++)
    {
      if (num % i == 0)
      {
        count++;
      }
    }
    if (count == 2)
    {
      cout << num << " is a prime number";
    }
    else
    {
      cout << num << " is not a prime number";
    }
  }
  return 0;
}