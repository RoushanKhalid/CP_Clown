#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,loop;
    cin>>size>>loop;
    string str;
    cin>>str;
    for(int i=0;i<loop;i++){
        for(int j=0;j<size-1;j++){
            if(str[j]=='B' && str[j+1]=='G'){
                str[j]='G';
                str[j+1]='B';
                j++;
            }
        }
    }
    cout<<str<<endl;
}