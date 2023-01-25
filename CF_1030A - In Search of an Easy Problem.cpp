#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
        if(arr[i]==1){
            count++;
        }
    }
    if(count==0){
        cout<<"EASY"<<endl;
    }else{
        cout<<"HARD"<<endl;
    }
    return 0;
}