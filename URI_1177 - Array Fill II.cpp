#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin>>x;
    int arr[1000],temp=0;
    for(int i=0;i<1000;i++){
        if(temp==x) temp=0;
        cout<<"N["<<i<<"] = "<<temp<<endl;
        temp++;
    }
    return 0;
}