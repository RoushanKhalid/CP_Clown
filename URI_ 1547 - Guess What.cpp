#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,location,diff=100; cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
            if(abs(arr[i]-b)<diff){
                diff=abs(arr[i]-b);
                location=i+1;
            }
        }
        cout<<location<<endl;
    }
    return 0;
}