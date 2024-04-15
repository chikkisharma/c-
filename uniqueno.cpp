#include<bits/stdc++.h>
using namespace std;
int uniquefinder(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[5]={1,2,3,2,1};
    int finalans=uniquefinder(arr,5);
    cout<<finalans<<endl;
}