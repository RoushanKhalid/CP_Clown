#include<bits/stdc++.h>
using namespace std;
int main(){
    char str; cin>>str;
    int x=str+1;
    if(x>122) x=97;
    cout<<char(x)<<endl;
    return 0;
}