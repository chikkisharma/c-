#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int n=5,sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
