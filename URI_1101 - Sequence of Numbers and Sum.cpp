#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,sum=0; 
    while(1){
        cin>>m>>n;
        if(m<=0 || n<=0){
            return 0;
        }
        if(m>n){
            swap(m,n);
        }
        for(int i=m;i<=n;i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"Sum="<<sum<<endl;
        sum=0;
    }
    return 0;
}