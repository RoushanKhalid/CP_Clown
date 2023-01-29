#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A' || str[i]=='O' || str[i]=='Y' || str[i]=='E' || str[i]=='U' || str[i]=='I' || str[i]=='a' || str[i]=='o' || str[i]=='y' || str[i]=='e' || str[i]=='u' || str[i]=='i'){
            continue;
        }else{
            str[i]=tolower(str[i]);
            cout<<"."<<str[i];
        }
    }
}