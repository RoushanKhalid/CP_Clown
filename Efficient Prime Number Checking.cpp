#include<bits/stdc++.h>
using namespace std;
int main(){
    int num; cin>>num;
    if(num<=1){
        cout<<"NO"<<endl;
        return 0;
    }
    bool x=true;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) x=false;
    }
    if(x==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
