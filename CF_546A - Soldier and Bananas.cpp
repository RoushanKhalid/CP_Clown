#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,total=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        total=total+(i*k);
    }
    int borrow=(total-n);
    if(borrow<=0){
        cout<<"0"<<endl;
    }else{
        cout<<borrow<<endl;
    }
    return 0;
}