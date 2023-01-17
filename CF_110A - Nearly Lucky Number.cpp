#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num;
    int rem,count=0;
    cin>>num;
    while(num!=0){
        rem=num%10;
        if(rem==4 || rem==7){
            count++;
        }
        num=num/10;
    }
    if(count==7 || count==4){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}