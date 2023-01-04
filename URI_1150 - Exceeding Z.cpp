#include <iostream>
using namespace std;
int main() {
    int x,z;
    int count=0,sum=0;
    cin>>x>>z;
    while(z<=x){
        cin>>z;
    }
    for(int i=x;x<=z;x++){
        sum=sum+x;
        count=count+1;
        if(sum>=z){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}