#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string first;
    string second;
    cin>>first>>second;
    for(int i=0;i<first.size();i++){
        first[i]=tolower(first[i]);
        second[i]=tolower(second[i]);
    }
    if(first==second){
        cout<<"0"<<endl;
    }else{
        for(int i=0;i<first.size();i++){
            if(first[i]<second[i]){
                cout<<"-1"<<endl;
                break;
            }
            if(first[i]>second[i]){
                cout<<"1"<<endl;
                break;
            }
        }
    }
    return 0;
}