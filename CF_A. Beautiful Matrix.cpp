#include<iostream>
using namespace std;
int main(){
    int i,j,x[5][5],num=1;;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>x[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(x[i][j]==1){
                cout<<abs(i+1-3)+abs(j+1-3)<<endl;
            }
        }
    }
    return 0;
}