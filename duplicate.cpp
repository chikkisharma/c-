#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,2,4};
    int n=5;
    int ans=duplicate(arr,n);
    cout<<ans;

}