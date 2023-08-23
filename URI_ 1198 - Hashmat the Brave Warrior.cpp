#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    while((cin>>a>>b) && (a!=EOF) && (b!=EOF)){
        long long x=abs(a-b);
        cout<<x<<endl;
    }
    return 0;
}