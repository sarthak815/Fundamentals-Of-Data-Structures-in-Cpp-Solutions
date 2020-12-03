#include<iostream>
#include <stdlib.h>
using namespace std;
int loc(int arr[],int n, int len){
    cout<<len<<'\n';

    for(int i=0;i<len;i++){
        if(arr[i]==n){
            return i;
        }
        
    }
    return -1;
}

int main(){

    int poly[] = {2, 6, 2, 1, 6, 8}; 
    int n;
    int len = sizeof(poly)/sizeof(poly[0]);
    cout<<"Enter number to be found: ";
    cin>>n;
    int k = loc(poly,n,len);
    cout<<"The location is: "<<k+1;
}