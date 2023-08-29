#include<bits/stdc++.h>
using namespace std;
int main(){
    int num; cin>>num;
    long long int arr[100000]={0};
    arr[0]=1;arr[1]=1;
    for(long long int i=2;i*i<=100000;i++){
        if(arr[i]==0){
            for(long long int j=i*i;j<=100000;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=1;i<=num;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}