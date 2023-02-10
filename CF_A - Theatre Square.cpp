#include<bits/stdc++.h>
using namespace std;
int main(){
    long long count1=0,count2=0,len,wid,a;;
    cin>>len>>wid>>a;
    if(len==a && wid==a){
        printf("1\n");
        return 0;
    }
    if(len%a==0){
        count1+=len/a;
    }else{
        count1+=(len/a)+1;
    }
    if(wid%a==0){
        count2+=wid/a;
    }else{
        count2+=(wid/a)+1;
    }
    long long result=count1*count2;
    cout<<result<<endl;
    return 0;
}
