#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,flag=0; cin>>x>>y;
    char ch;
    for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                scanf("%c",&ch);
                if(ch=='C' || ch=='M' || ch=='Y'){
                    flag=1;
                }
            }
        }
    if(flag==1){
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}