#include<iostream>
#include <stdlib.h>
using namespace std;


int ackfn(int m, int n){
    if(m==0){
        return n+1;
    }
    else if(n==0){
        return ackfn(m-1,1);
    }
    else{
        return ackfn(m-1,ackfn(m,n-1));
    }
   
    }

int main(){

    int n,m;
    cout<<"Enter numbers m and n: ";
    cin>>m>>n;
    cout<<"The ackerman value is: "<<ackfn(m,n);
}