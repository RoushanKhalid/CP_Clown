#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int size=str.size();
    sort(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        if(str[i]==str[i+1]){
            size--;
        }
    }
    if(size%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
