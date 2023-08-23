#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20],j=0;
    for(int i=0;i<20;i++){
        cin>>arr[i];
    }
    for(int i=19;i>=0;i--){
        printf("N[%d] = %d\n",j,arr[i]);
        j++;
    }
    return 0;
}