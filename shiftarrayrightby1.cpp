#include<bits/stdc++.h>
using namespace std;
void shift(int arr[],int n){
      int temp=arr[n-1];
    for(int i=4;i>=1;i--){
        arr[i]=arr[i-1];
    }
      arr[0]=temp;
}

int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;

    shift(arr,5);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}