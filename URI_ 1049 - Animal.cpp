#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    string c;
    cin>>a>>b>>c;
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c')cout<<"aguia\n";
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o')cout<<"pomba\n";
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o')cout<<"homem\n";
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h')cout<<"vaca\n";
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'm')cout<<"pulga\n";
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'r')cout<<"lagarta\n";
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h')cout<<"sanguessuga\n";
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o')cout<<"minhoca\n";
    return 0;
}