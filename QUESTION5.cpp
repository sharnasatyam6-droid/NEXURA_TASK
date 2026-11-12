#include<iostream>
using namespace std;

int main(){
    double P, T, R, SI;
    cout<<"Enter the principle: ";
    cin>>P;
    cout<<"Enter the time: ";
    cin>>T;
    cout<<"Enter the rate: ";
    cin>>R;
    SI = (P*R*T)/100;
    cout<<"The simple interst comes out to be: "<<SI<<endl;
    return 0;
}