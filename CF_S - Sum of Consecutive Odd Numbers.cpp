#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,sum=0; cin>>a>>b;
        if(a>b) swap(a,b);
        for(int i=a+1;i<=b-1;i++){
            if(i%2!=0) sum+=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}