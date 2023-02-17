// TLE -> Divisiblity_Problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long x,y; cin>>x>>y;
        if(x<=y){
            cout<<y-x<<endl;
        }else{
            int rem=x%y;
            if(rem==0){
                cout<<"0"<<endl;
            }else{
                cout<<y-rem<<endl;
            }
        }
    }
    return 0;
}