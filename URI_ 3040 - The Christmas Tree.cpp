#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,ac=0,b,bc=0,c,cc=0; cin>>a>>b>>c;
        if(a>=200 && a<=300) ac=1;
        if(b>=50) bc=1;
        if(c>=150) cc=1;
        if(ac==1 && bc==1 &&cc==1){
            cout<<"Sim"<<endl;
        }else{
            cout<<"Nao"<<endl;
        }
    }
    return 0;
}