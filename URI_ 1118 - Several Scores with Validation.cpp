#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=1;
    while(x!=2){
    double a; cin>>a;
    while(a<0.0 || a>10.0){
        cout<<"nota invalida"<<endl;
        cin>>a;
    }
    double b; cin>>b;
    while(b<0.0 || b>10.0){
        cout<<"nota invalida"<<endl;
        cin>>b;
    }
    double avg=(a+b)/2.0;
    cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>x;
    while(x>2 || x<1){
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>x;
    }
    }
    return 0;
}