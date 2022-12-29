#include <iostream>
using namespace std;
int main(){
    int num,last=0,rev=0,temp;
    cout<<"Enter the number : ";
    cin>>num;
    temp=num;
    while(temp>0){
        last=temp%10;
        rev=rev*10+last;
        temp/=10;
    }
    cout<<"The reverse number is "<<rev<<endl;
    if(num==rev) cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
    return 0;
}
