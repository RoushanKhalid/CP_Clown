#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        if(x==0 || x==1){
            cout<<"0"<<endl;
        }else{
            x=x-1;
            cout<<x/2<<endl;
        }
    }
    return 0;
}