#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int one=0,zero=0,flag=0;
    cin>>str;

    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            one++;
            zero=0;
        }else if(str[i]=='0'){
            zero++;
            one=0;
        }

        if(one>=7 || zero>=7){
            flag++;
        }
    }
    if(flag!=0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}