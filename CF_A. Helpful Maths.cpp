#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i,j;
    for(i=0;i<str.size();i+=2){
        for(j=0;j<str.size();j+=2){
            if(str[j]>str[j+2]){
                swap(str[j+2],str[j]);
            }
        }
    }
    cout<<str<<endl;
    return 0;
}