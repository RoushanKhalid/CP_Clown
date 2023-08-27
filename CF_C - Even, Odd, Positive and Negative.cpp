#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=t;i++){
        int n; cin>>n;
        if(n>0){
            pos++;
        }
        if(n<0){
            neg++;
        }
        if(n%2==0){
            even++;
        }
        if(n%2!=0){
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    return 0;
}