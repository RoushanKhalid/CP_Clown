#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string str;
        cin>>str;
        int fh=str[0]+str[1]+str[2];
        int lh=str[3]+str[4]+str[5];
        if(fh==lh){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}