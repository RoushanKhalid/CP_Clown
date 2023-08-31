#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,one=1,two=2,three=3; cin>>num;
    for(int i=0;i<num;i++){
        cout<<one<<" "<<two<<" "<<three<<" "<<"PUM"<<endl;
        one+=4;
        two+=4;
        three+=4;
    }
    return 0;
}