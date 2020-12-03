#include<iostream>
#include <stdlib.h>
using namespace std;
int horner(int poly[],int n,int x){
    int result = poly[0];
    for(int i=1;i<n;i++){
        result = result*x+poly[i];
    }
    cout<<"The number of steps is: "<<n<<'\n';
    return result;
}

int main(){
     // Let us evaluate value of 2x3 - 6x2 + 2x - 1 for x = 3 
    int poly[] = {2, -6, 2, -1}; 
    int x = 3; 
    int n = sizeof(poly)/sizeof(poly[0]); 
    int result = horner(poly, n, x);
    cout << "Value of polynomial is " << result; 
    return 0; 
}