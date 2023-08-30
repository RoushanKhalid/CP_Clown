#include<bits/stdc++.h>
using namespace std;
int main(){
    int num; cin>>num;//4
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}