#include <iostream>
using namespace std;

int main() {
    int num1, num2, gcd = 1;
    cout << "Enter your number 1: ";
    cin >> num1;
    cout << "Enter your number 2: ";
    cin >> num2;
    if(num1 != num2){
            if (num1 > num2) {
        for (int i = 1; i <= num2; i++) {
            if (num1 % i == 0 && num2 % i == 0) {
                gcd = i;
            }
        }
    }
    else if (num2 > num1) {
        for (int i = 1; i <= num1; i++) {
            if (num1 % i == 0 && num2 % i == 0) {
                gcd = i;
            }
        }
    }
    cout<<"The Greatest common divisor of the numbers "<<num1<<" and "<<num2<<" is "<<gcd;
    }
    else{
        cout<<"Both numbers are equal hence their GCD is "<<num1;
    }

    return 0;
}