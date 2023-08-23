#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch; cin>>ch;
    if(islower(ch)){
        ch=toupper(ch); 
    }else if(isupper(ch)){
        ch=tolower(ch);
    }
    cout<<ch<<endl;
    return 0;
}