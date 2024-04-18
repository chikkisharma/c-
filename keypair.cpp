#include<bits/stdc++.h>
using namespace std;
bool keypair(int arr[],int n,int t){
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==t){
            return true;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>t){
            j--;
        }
        else if(arr[i]+arr[j]<t){
            i++;
         }
    }
    return false;
}
int main(){
    int arr[6]={1,4,45,6,8,10};
    int n=6;
    int t=10;
    
    bool ans=keypair(arr,n,t);
    if(ans==1){
        cout<<"true";
    }
    else{
        cout<<"false;
    }
}
