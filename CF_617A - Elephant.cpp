#include<bits/stdc++.h>
using namespace std;
int main(){
    int dis;
    cin>>dis;
    int count=0;
    if(dis<5 && dis>0){
        cout<<"1"<<endl;
    }else if(dis%5==0){
        cout<<(dis/5)<<endl;
    }else{
        cout<<(dis/5)+1<<endl;
    }
    return 0;
}