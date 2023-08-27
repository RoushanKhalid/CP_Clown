#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=-100000; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}