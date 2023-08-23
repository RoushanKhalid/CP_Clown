#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[92];
    arr[0]=0;
    arr[1]=1;
    int a; cin>>a;
    for(int i=2;i<a;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[0];
    for(int i=1;i<a;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}