#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,count=0; cin>>n;
        int size=2*n;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        for(int i=0;i<size;i++){
            if(arr[i]%2==0){
                continue;
            }else{
                count++;
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}