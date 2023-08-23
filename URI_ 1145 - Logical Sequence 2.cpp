#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int counter=1;
    for(int i=1;i<=b;i++){
        if(counter==a){
            cout<<i<<endl;
            counter=1;
        }else{
            cout<<i<<" ";
            counter++;
        }
    }
    return 0;
}