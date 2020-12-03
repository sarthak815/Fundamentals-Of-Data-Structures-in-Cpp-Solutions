#include<iostream>
#include <stdlib.h>
using namespace std;
int fibbo(int n, int f0, int f1){

    if(n==0){
        return f0;
        
    }
    else if(n==1){
        return f1;
    }
    else{
        int k =f1+f0;
        f0 = f1;
        return fibbo(n-1,f0,k);
    }
    }

int main(){

    int n;
    cout<<"Enter number to be found: ";
    cin>>n;
    cout<<"The fibbonacci number is: "<<fibbo(n, 0, 1);
}