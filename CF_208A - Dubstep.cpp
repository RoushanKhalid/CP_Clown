#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    bool space=0;//WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
    for(int i=0;i<str.size();i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            if(space==1) cout<<" ";
            space=0;
            i+=2;
        }else{
            cout<<str[i];
            space=1;
        }
    }
    return 0;
}