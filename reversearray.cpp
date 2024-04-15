#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=6;
    reversearray(arr,size);
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}