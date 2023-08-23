#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if(b==0){
            cout<<"divisao impossivel"<<endl;
        }else{
            double x=(double)a/b;
            cout<<fixed<<setprecision(1)<<x<<endl;
        }
    }
    return 0;
}