#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    while(n--){
        cin>>str;
        for(int i=0;i<str.size();i++){
        if(str[i]=='c' || str[i]=='o' || str[i]=='d' || str[i]=='e' || str[i]=='f' ||  str[i]=='r' || str[i]=='c' || str[i]=='s'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    }
    return 0;
}