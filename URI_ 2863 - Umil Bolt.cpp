#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n && n!=EOF){
        double arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[0]<<endl;
    }
    return 0;
}