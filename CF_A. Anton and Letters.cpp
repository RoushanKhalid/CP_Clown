#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string str;
    getline(cin,str);
    if(str.size()==3){
        cout<<"1"<<endl;
        return 0;
    }
    sort(str.begin(),str.end());
    for(int i=1;i<str.size()-1;i++){
        if(str[i]>=97 && str[i]<=122){
            if(str[i]!=str[i+1]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}