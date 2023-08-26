#include<bits/stdc++.h>
using namespace std;
int main(){
    int num; cin>>num;
    vector<int> arr;
    while(num>0){
        int digit=num%10;
        arr.push_back(digit);
        num/=10;
    }
    if(arr[1]!=0 && arr[0]%arr[1]==0) cout<<"YES"<<endl;
    else if(arr[0]!=0 && arr[1]%arr[0]==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}