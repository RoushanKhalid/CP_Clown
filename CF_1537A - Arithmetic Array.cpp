#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x,sum=0,count=0; cin>>x;
        for(int i=1;i<=x;i++){
            int a;
            cin>>a;
            sum+=a;
        }
        for(int i=sum;i>=x;i--){
            count++;
        }
        cout<<abs(count-1)<<endl;
    }
    return 0;
}