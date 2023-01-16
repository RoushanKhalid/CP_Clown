#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int lower=0,upper,i;
    cin>>str;
    for(i=0;i<str.size();i++){
        if(str[i]>=97 && str[i]<=122){
            lower++;
        }
    }
    upper=str.size()-lower;
    if(lower==upper){
        for(i=0;i<str.size();i++){
            str[i]=tolower(str[i]);
        }
    }else if(lower<upper){
        for(i=0;i<str.size();i++){
            str[i]=toupper(str[i]);
        }
    }else{
        for(i=0;i<str.size();i++){
            str[i]=tolower(str[i]);
        }
    }
    cout<<str<<endl;
return 0;
}