#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d; // 3 7 9 5
        int x,y,n1,n2; 
        int win1 = max(a,b);
        int loss1 = min(a,b);
        int win2 = max(c,d);
        int loss2 = min(c,d);
        if (loss1<=win2 && loss2<=win1){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
    return 0;
}