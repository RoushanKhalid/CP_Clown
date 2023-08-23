#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x1,x2,x3,x4; cin>>x1>>x2>>x3>>x4;
    long long a=max(x1,x3);
    long long b=min(x2,x4);
    if(a<=b){
        cout<<a<<" "<<b<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}