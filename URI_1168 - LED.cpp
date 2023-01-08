#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,l,j,led=0;
    char num[102];
    cin>>n;
    while(n--){
        cin>>num;
        l = strlen(num);
        for(j = 0;j < l;j++){
            if(num[j] == '1')led += 2;
            else if(num[j] == '2' || num[j] == '3' || num[j] == '5')led += 5;
            else if(num[j] == '0' || num[j] == '9' || num[j] == '6')led += 6;
            else if(num[j] == '4')led += 4;
            else if(num[j] == '7')led += 3;
            else if(num[j] == '8')led += 7;
        }
        cout<<led<<" leds"<<endl;
        led=0;
    }
    return 0;
}