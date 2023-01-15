#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j;
    for(i=0; i<str.size(); i+=2){
        for(j=i+2; j<str.size(); j+=2){
            if(str[i]>str[j]){
                swap(str[i],str[j]);
            }
        }
    }
    cout<<str<<endl;
}
