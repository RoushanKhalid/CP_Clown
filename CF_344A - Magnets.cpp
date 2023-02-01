#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,count=1;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x-1;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}