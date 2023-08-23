#include<bits/stdc++.h>
using namespace std;
long long fact(long long x){
    long long res=1;
    for(long long i=1;i<=x;i++){
        res=res*i;
    }
    return res;
}
int main(){
    int a,b; 
    while(cin>>a>>b){
        long long sum=fact(a)+fact(b);
        cout<<sum<<endl;
    } 
    return 0;  
}