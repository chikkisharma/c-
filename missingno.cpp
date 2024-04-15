#include<bits/stdc++.h>
using namespace std;
void missingno(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int totalsum=(n*(n+1))/2;
    int ans=totalsum-sum;
    cout<<ans;
}
int main(){
    int arr[10]={4 ,6 ,7 ,9 ,2 ,1 ,8 ,11, 10, 3 };
    int n=11;
    missingno(arr,n);
}
