#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0; cin>>n;
    if(n==0 || n==1){
        cout<<"NO"<<endl;
        return 0;
    }else{
        for(int i=1;i<=n;i++){
            if(n%i==0){
               count++;
            }
        }
        if(count==2){
           cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}