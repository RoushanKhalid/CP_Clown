#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int flag1=0,flag2=0;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1]){
                flag1++;
            }
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1]){
                flag2++;
            }
        }
        if(flag1==flag2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}