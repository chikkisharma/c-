#include<bits/stdc++.h>
using namespace std;
void shiftarray(int arr[],int n){
    int temp=arr[0];

    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}


int main(){
    int arr[5]={10,20,30,40,50};
    shiftarray(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}