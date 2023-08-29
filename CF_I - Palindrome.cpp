#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num,rev=0,rem=0,copy; cin>>num;
    copy=num;
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num/=10;
    }
    cout<<rev<<endl;
    if(rev==copy) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}