#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,X; cin>>t;
    while(t--){
        cin>>X;
        if(X==0) printf("NULL\n");
        else if(X<=0 && X%2==0) cout<<"EVEN NEGATIVE"<<endl;
        else if(X<=0 && X%2==-1) cout<<"ODD NEGATIVE"<<endl;
        else if(X>=0 && X%2==0) cout<<"EVEN POSITIVE"<<endl;
        else if(X>=0 && X%2==1) cout<<"ODD POSITIVE"<<endl;
    }
    return 0;
}