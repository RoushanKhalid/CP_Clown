#include<iostream>
using namespace std;
int main()
{
    int x,i,sum=0;
    while(1){
        cin>>x;
        if(x==0){
            break;
        }
        if(x%2!=0){
            x++;
        }
        for(i=1;i<=5;i++){
            sum+=x;
            x+=2;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}