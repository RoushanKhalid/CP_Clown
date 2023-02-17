#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,i; cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr,arr+num);
    for(int i=num-2;i>=0;i--){
        if(arr[i]!=arr[num-1]){
            cout<<arr[i]<<endl;
            return 0;
        }
    }
}