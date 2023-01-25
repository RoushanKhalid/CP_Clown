#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    while(1){
        num++;
    int a=num%10;
    int b=(num/10)%10;
    int c=(num/100)%10;
    int d=(num/1000)%10;
    if(a!=b && a!=c && a!=d && b!=a && b!=c && b!=d && c!=a && c!=b && c!=d && d!=a && d!=b && d!=c){
        break;
    }
    }
    cout<<num<<endl;
    return 0;
}