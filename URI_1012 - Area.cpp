#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B,C;
    cin>>A>>B>>C;
    double TRIANGULO=(A*C)/2;
    double CIRCULO=3.14159*C*C;
    double TRAPEZIO=((C*A)+(C*B))/2;
    double QUADRADO=B*B;
    double RETANGULO=A*B;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<TRIANGULO<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<CIRCULO<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<TRAPEZIO<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<QUADRADO<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<RETANGULO<<endl;
    return 0;
}