#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t,x=0;
    char str[10];
    cin>>t;
    while(t--){
        cin>>str;
        if(str[1]=='+'){
            x++;
        }else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}