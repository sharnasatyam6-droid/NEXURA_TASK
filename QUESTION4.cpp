#include<iostream>
using namespace std;

int main(){
    int c;
    int a = 10;
    int b = 20;
    c = a;
    a = b;
    b = c;
    cout<<"a = "<<a<<" and b = "<<b;
    return 0;
}