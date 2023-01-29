#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string hello="hello";
    int count=0,i=0,j=0;
    cin>>str;
    for(i=0;i<str.size();i++){
        if(str[i]==hello[j]){
            count++;
            j++;
        }
    }
    if(count==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}