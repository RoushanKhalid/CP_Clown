#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,Mishka=0,Chris=0,m,c;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>m>>c;
        if(m>c)
            Mishka++;
        else if(m<c)
            Chris++;
    }
    if(Mishka>Chris){
        cout<<"Mishka"<<endl;
    }else if(Mishka==Chris){
        cout<<"Friendship is magic!^^"<<endl;
    }else{
        cout<<"Chris"<<endl;
    }
    return 0;
}