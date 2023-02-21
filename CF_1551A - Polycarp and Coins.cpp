#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int num; cin>>num; //5
        if(num%3!=0){
            int one=(num/3)+1; //2
            int last=num-one; //3
            int two=last/2; //1
            if(one+(two*2)==num){
                cout<<one<<" "<<two<<endl;
            }else{
                cout<<two<<" "<<one<<endl;
            }
        }else if(num%3==0){
            int eq=num/3;
            cout<<eq<<" "<<eq<<endl;
        }
    }
    return 0;
}