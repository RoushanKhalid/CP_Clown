#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x,count=0; cin>>x;
        for(int i=1;i<=x;i++){
            if(x%i==0){
                count++;
            }
        }
        if(count==2){
            cout<<x<<" eh primo"<<endl;
        }else{
            cout<<x<<" nao eh primo"<<endl;
        }
    }
    return 0;
}