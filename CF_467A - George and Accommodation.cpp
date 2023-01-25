#include<bits/stdc++.h>
using namespace std;
int main(){
    int room,a,b,count=0;
    cin>>room;
    while(room--){
        cin>>a>>b;
        if(b-a>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}