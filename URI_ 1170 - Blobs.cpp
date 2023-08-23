#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        double x; cin>>x;
        int count=0;
        while(x>1){
            x=x/2;
            count++;
        }
        cout<<count<<" dias"<<endl;
    }
}