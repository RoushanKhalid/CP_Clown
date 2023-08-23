#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,a,b,ac=0,bc=0;
 while(cin>>n && n!=0){
  while(n--){
    cin>>a>>b;
    if(a>b) ac++;
    if(a<b) bc++;
   }
  cout<<ac<<" "<<bc<<endl;
  ac=0;
  bc=0;
 }
 return 0;
}