#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        reverse(str.begin(),str.end());
        int x=str.length();
        for(int i=0;i<x;i++){
            cout<<str[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}