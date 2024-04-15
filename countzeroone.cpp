#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={0,0,0,1,1,0,1,0,1,0};
    int n=10;
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else if(arr[i]==1){
            onecount++;
        }
    }
    cout<<"count of zero:"<<zerocount<<endl;
    cout<<"count of one:"<<onecount<<endl;
}