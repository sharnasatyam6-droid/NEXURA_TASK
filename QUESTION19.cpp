#include<iostream>
using namespace std;

int main(){
    int original, num, temp, temp1 = 0, temp2, binary = 0;
    cout<<"Enter your number: ";
    cin>>original;
    num = original;
    while(num != 0){
        temp = num % 2;
        num = num / 2;
        temp1 = temp1 * 10 + temp;
    }
    while(temp1 != 0){
        temp2 = temp1 % 10;
        temp1 = temp1 / 10;
        binary = binary * 10 + temp2;
    }
    cout<<"The binary of the number "<<original<<" is "<<binary;
    return 0;
}