#include<bits/stdc++.h>
using namespace std;
int main(){
    int limak,bob,count=0;
    cin>>limak>>bob;
    while(1){
        if(limak>bob){
            break;
        }
        limak=limak*3;
        bob=bob*2;
        count++;
    }
    cout<<count<<endl;
    return 0;
}