#include<bits/stdc++.h>
using namespace std;
int main(){
    int start,end,sum=0; cin>>start>>end;
    if(start>end){
        swap(start,end);
    }
    for(int i=start+1;i<end;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}