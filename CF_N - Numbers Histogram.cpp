#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch; cin>>ch;
    int num; cin>>num;
    int arr[num];
    for(int i=0;i<num;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<num;i++) {
        for(int j=0;j<arr[i];j++) {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}