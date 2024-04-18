#include<bits/stdc++.h>
using namespace std;
int addition(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[5];
    int n=5,sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=addition(arr,n);
    cout<<ans;
}
