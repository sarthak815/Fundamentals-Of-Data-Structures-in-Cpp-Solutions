#include<iostream>
#include <stdlib.h>
using namespace std;
int fact(int n){
    if (n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){

    int n;
    cout<<"Enter number to be found: ";
    cin>>n;
    if(n<1){
        cout<<"1";
    }
    else{
    cout<<fact(n);
    }
}