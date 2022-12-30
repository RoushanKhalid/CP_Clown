#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks to determine whether you passed or failed :) "<<endl;
    cin>>marks;
    while(marks>100){
        cout<<"Please make sure you obtained mark is between 0 to 100."<<endl;
        cin>>marks;
    }
    marks>=40 ? cout<<"Passed" : cout<<"Failed";
    return 0;
}
