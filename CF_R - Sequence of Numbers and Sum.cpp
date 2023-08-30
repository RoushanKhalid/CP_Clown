#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum=0; 
    while(1){
    cin>>a>>b;
    if(a<=0 || b<=0) return 0;
    if(a>b) swap(a,b);
        for(int i=a;i<=b;i++){
            cout<<i<<" ";
            sum+=i;
        }
    cout<<"sum ="<<sum<<endl;
    sum=0;
    }
    return 0;
}