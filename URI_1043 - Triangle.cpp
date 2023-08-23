#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c; cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    }else{
        double x=0.5*c*(a+b);
        cout<<fixed<<setprecision(1)<<"Area = "<<x<<endl;
    }
    return 0;
}