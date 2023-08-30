#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,rem,temp; cin>>a>>b;
    bool x=false;
    vector<int> v;
    for(int i=a;i<=b;i++){
        temp=i;x=false;
        while(temp>0){
            rem=temp%10;
            temp/=10;
            if(rem==4 || rem==7){
                x=true;
            }else{
                x=false;break;
            }
        }
        if(x==true){
             x=false;
            cout<<i<<" ";
            v.push_back(i);
        }
    }
    if(v.size()==0){
        cout<<"-1"<<endl;
    }
return 0;
}
