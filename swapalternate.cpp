#include<bits/stdc++.h>
using namespace std;
void swapalternate(int arr[],int n){
    for(int i=0;i<n-1;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main(){
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    int n=11;
    swapalternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}