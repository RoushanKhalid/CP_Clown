#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    string temp=str1+str2;
    sort(str3.begin(),str3.end());
    sort(temp.begin(),temp.end());
    if(str3==temp){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}