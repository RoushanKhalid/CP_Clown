#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,z;
    int count=0,sum=0;
    cin>>x>>z;
    while(z<=x){
        cin>>z;
    }
    for(int i=x;i<=z;i++){
        sum=sum+i;
        count++;
        if(sum>=z){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}