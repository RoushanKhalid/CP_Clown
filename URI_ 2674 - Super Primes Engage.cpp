#include<bits/stdc++.h>
using namespace std;
bool prime(int x){//23
    bool a=1;
    for(int i=2;i<=(x/2);i++){
        if(x%i==0){
            a=0;
            break;
        }
    }
    return a;//1
}
int main(){
    int x;
    while(cin>>x && x!=EOF){
        if(prime(x)==1 && x>1){
            int flag=1;
            while(x>0){
                int last=x%10;
                prime(last);
                x/=10;
                if(prime(last)==0 || last<=1){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                cout<<"Super"<<endl;
            }else{
                cout<<"Primo"<<endl;
            }
        }else{
            cout<<"Nada"<<endl;
        }
    }
    return 0;
}