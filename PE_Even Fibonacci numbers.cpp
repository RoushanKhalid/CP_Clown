#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int pre,curr,next,sum=0,cap=4000000;
    pre=0;
    curr=1;
    while(curr<cap){
        next=pre+curr;
        pre=curr;
        curr=next;
        if(curr%2==0){
            sum+=curr;
        }
    }
    cout<<sum<<endl;
    return 0;
}
