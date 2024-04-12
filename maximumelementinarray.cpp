#include<bits/stdc++.h>
using namespace std;
int maxno(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}



int main(){
    int arr[5]={2,5,6,4,3};
    int ans=maxno(arr,5);
    cout<<ans<<endl;
}