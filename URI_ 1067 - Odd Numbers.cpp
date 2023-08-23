#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; cin>>a;
    if(a%2!=0){
        a++;
    }
    for(int i=1;i<a;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
    }
    return 0;
}