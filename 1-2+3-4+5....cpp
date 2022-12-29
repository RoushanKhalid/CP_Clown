#include <iostream>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    for(i=1;i<=num;i++){
        if(i%2==0){
            sum-=i;
        }else{
            sum+=i;
        }
    }
    cout<<"The sum of 1-2+3.."<<num<<" is "<<sum<<endl;
    return 0;
}