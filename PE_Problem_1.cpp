#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=1000,i,sum=0;
    for(i=1;i<num;i++){
        if(i%3==0 || i%5==0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
