#include<bits/stdc++.h>
using namespace std;
int main(){
    int num; cin>>num;
    int arr[num]={0};
    for(int i=2;i<=num;i++){
        if(arr[i]==0){
            for(int j=i*i;j<=num;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=num;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}