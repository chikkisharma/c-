#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    int m=0;
    int l=0;
    int h=n-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            m++;
            l++;
        }
        else if(arr[m]==1){
            m++;
        }
        else if(arr[m]==2){
            swap(arr[m],arr[h]);
            h--;
        }
    }
}
int main(){
    int arr[9]={1,1,0,2,0,1,2,0,1};
    int n=9;
    sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
