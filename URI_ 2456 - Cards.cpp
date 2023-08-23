#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a>b&&b>c&&c>d){
        cout<<"D"<<endl;
    }else if(a<b&&b<c&&c<d){
        cout<<"C"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    return 0;
}