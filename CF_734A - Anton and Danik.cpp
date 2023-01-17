#include<iostream>
#include<string>
using namespace std;
int main(){
    int num,i,a=0,d=0;
    string str;
    cin>>num;
    cin>>str;
    for(i=0;i<num;i++){
        if(str[i]=='A'){
            a++;
        }else if(str[i]=='D'){
            d++;
        }    
    }
    if(a==d){
        cout<<"Friendship"<<endl;
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    if(a<d){
        cout<<"Danik"<<endl;
    }
    return 0;
}