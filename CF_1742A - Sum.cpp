#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,a,b,c; 
    cin>>num;
    while(num--){
        cin>>a>>b>>c;
        if(a+b==c || a+c==b || b+c==a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}