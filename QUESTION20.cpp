#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter you number: ";
    cin>>num;
    for(int i = 1; i <= num; i++){
        int j = i;
        while(num - j != 0){
            cout<<" ";
            j++;
        }
        int g = i;
        for(int k = 1; k <= g; k++){
            cout<<k;
            cout<<"  ";
        }
        cout<<endl;

    }
    return 0;
}