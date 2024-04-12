#include<bits/stdc++.h>
using namespace std;
int smax(int arr[],int n){
    sort(arr,arr+n);
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    if(smax==INT_MIN)
    return -1;
    return smax;
}
int main(){
    int arr[5]={3,67,50,2,80};
    int n=5;
    int slargest=smax(arr,n);
    cout<<slargest;
}