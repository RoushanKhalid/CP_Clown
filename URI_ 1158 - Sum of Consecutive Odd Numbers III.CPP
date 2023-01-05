#include<iostream>
using namespace std;
int main()
{
    int t,x,y,i,sum=0;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x%2==0){
            x++;
        }
        for(i=1;i<=y;i++){
            sum+=x;
            x+=2;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
