#include<bits/stdc++.h>
using namespace std;
void keypair(int arr[],int n,int t){
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==t){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>t){
            j--;
        }
        else if(arr[i]+arr[j]<t){
            i++;
         }
       else if(arr[i]+arr[j]!=t){
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    }
}
int main(){
   // int arr[4]={2,7,11,13};
    int arr[5]={5,4,4,2,2};
    int n=5;
    int t=1;
    
    keypair(arr,n,t);
}