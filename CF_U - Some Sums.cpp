#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,sum=0,tsum=0; cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        int temp=i;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        if(sum>=a && sum<=b){
            tsum+=i;
            sum=0;
        }
        else sum=0;
    }
    cout<<tsum<<endl;
    return 0;
}