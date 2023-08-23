#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    int fl=floor(a/(double)b);
    int ce=ceil(a/(double)b);
    int ro=round(a/(double)b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<fl<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ce<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<ro<<endl;
    return 0;
}