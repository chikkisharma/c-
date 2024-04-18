#include<bits/stdc++.h>
using namespace std;
int product(int arr[],int n){
    int prod=1;
    for(int i=0;i<n;i++){
        prod=prod*arr[i];
    }
    return prod;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int ans=product(arr,n);
    cout<<ans;
}