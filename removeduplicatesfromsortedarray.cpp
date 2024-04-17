#include<bits/stdc++.h>
using namespace std;
int remove(int arr[],int n){
    int count=0;
    cout<<"New array after removing duplicate elements:";
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            count++;
            cout<<arr[i]<<" ";
        }
    }
    return count;
}

int main(){
    int arr[5]={1,2,2,3,4};
    int n=5;
    int ans=remove(arr,n);
    cout<<endl<<"The size of an array after removing duplicate elements:";
    cout<<ans;
}