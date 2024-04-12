#include<bits/stdc++.h>
using namespace std;
int minno(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    int arr[5]={9,4,7,2,8};
    int ans=minno(arr,5);
    cout<<ans;
}