#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,count=0; 
    while(1){
        cin>>a>>b;//11 23
        if(a==0 && b==0){
            return 0;
        }
        int c=b-a;//22
        if(c>=100){
            c-=100;
            count++;
        }
        if(c>=50 && c<100){
            c-=50;
            count++;
        }
        if(c>=20 && c<50){
            c-=20; //2
            count++; //1
        }
        if(c>=10 && c<20){
            c-=10;
            count++;
        }
        if(c>=5 && c<10){
            c-=5;
            count++;
        }
        if(c>=2 && c<5){
            c-=2;//0
            count++;//2
        }
        if(count==2 && c==0){
            cout<<"possible"<<endl;
        } 
        else{
            cout<<"impossible"<<endl;
        }
        count=0;
    }
    return 0;
}