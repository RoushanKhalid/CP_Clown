#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,temp1,temp2,rem; cin>>a>>b;//60 24
    temp1=a; temp2=b;
    while(temp2!=0){
        rem=temp1%temp2;//12 0
        temp1=temp2;// temp1=24 12;
        temp2=rem;// temp2=12 0;
    }
    cout<<temp1<<endl;
    return 0;
}