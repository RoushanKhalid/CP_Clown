#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin>>x;
    while(x--){
        int n; cin>>n;
        long long arr[64];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<64;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        if(n==0) cout<<"Fib(0) = 0"<<endl;
        else if(n==1) cout<<"Fib(1) = 1"<<endl;
        else{
            cout<<"Fib("<<n<<") = "<<arr[n]<<endl;
        }
    }
    return 0;
}