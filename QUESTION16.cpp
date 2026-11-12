#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int original, digit, num, count = 0, sum = 0, temp, totalsum;
    double power;
    cout<<"Enter your number: ";
    cin>>original;
    temp = original;
    while(temp != 0){
        temp = temp / 10;
        count++;
    }
    num = original;
    while(num != 0){
        digit = num % 10;
        num = num / 10;
        power = pow(digit, count);
        totalsum = sum + power;
        sum = totalsum;
    }
    if (totalsum == original){
        cout<<original<<" is an armstrong number";
    }
    else{
        cout<<original<<" is not an armstrong number";
    }
    return 0;
}