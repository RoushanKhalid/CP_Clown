#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,t;
    string str;
    cin>>t;
    cin>>str;
    for(int i=0;i<t;i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}