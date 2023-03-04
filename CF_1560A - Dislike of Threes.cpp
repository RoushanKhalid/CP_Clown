#include<bits/stdc++.h> //helped by one's github
using namespace std;
int main(){
    int arr[1000],j=1;
    for(int i=1;i<=1666;i++){
        if(i%3!=0){
            if(i%10!=3){
                arr[j]=i;
                j++;
            }
        }
    }
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        cout<<arr[x]<<endl;
    }
    return 0;
}