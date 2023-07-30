#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin>>x;
    while(x--){
        int count=0;
        string str; cin>>str;
        if(str[0]=='y' || str[0]=='Y') count++;
        if(str[1]=='e' || str[1]=='E') count++;
        if(str[2]=='s' || str[2]=='S') count++;
        if(count==3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}