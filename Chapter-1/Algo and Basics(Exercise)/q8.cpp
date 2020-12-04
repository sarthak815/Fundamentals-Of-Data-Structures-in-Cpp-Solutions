#include<iostream>
#include <stdlib.h>
using namespace std;
/* Explanation: By rule in combinations C(n,k)=C(n-1,k-1)+C(n-1,k)   */

int coeff(int n, int m){
    if(m==0||n==m){
        return 1;
    }
    return coeff(n-1,m-1)+coeff(n-1,m);
   
    }

int main(){

    int n,m;
    cout<<"Enter numbers m and n: ";
    cin>>m>>n;
    cout<<"The binary coefficient is: "<<coeff(m,n);
}