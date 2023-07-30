#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,count=0; cin>>n;
        string str; cin>>str;
        sort(str.begin(),str.end());
        for(int i=1;i<n;i++){
            if(str[i]==str[i-1]) count++;
            else count+=2;
        }
        cout<<count+2<<endl;
    }
    return 0;
}