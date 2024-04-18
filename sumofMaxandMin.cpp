#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[7]={1 ,2, 4, 5, 6, 6, 6 };
    int n=7;
    int maximum=max(arr,n);
    int minimum=min(arr,n);
    int ans=maximum+minimum;
    cout<<ans;
}