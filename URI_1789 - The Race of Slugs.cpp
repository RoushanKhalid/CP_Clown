#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,inp;
    while((cin>>num) && num!=EOF){
        int temp=0;
        for(int i=0;i<num;i++){
            cin>>inp;
            if(inp>=temp){
                temp=inp;
            }
        }
        if(temp<10){
            cout<<"1"<<endl;
        }else if(temp>=10 && temp<20){
            cout<<"2"<<endl;
        }else if(temp>=20){
            cout<<"3"<<endl;
        }
    }
    return 0;
}