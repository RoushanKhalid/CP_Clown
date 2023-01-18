#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num;
    int x;
    cin>>num>>x;
    int count=0;
    while(count!=x){
        int rem=num%10;
        if(rem==0){
            num=num/10;
            count++;
        }else{
            num--;
            count++;
        }
    }
    cout<<num<<endl;
    return 0;
}