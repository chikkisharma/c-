#include<bits/stdc++.h>
using namespace std;
int countoddnumber(int low,int high){
    int count=0;
    for(int i=low;i<=high;i++){
        if(i%2!=0){
            count++;
        }
    }
    return count;
}

int main(){
    int low,high;
    cin>>low>>high;
    int ans=countoddnumber(low,high);
    cout<<ans;
}