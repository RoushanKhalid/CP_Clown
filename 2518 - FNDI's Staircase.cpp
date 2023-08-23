#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    while(cin>>x && x!=EOF){//4
    int uccota,lombo,width; cin>>uccota>>lombo>>width;
    double otivuj=abs(sqrt((lombo*lombo)+(uccota*uccota)));
    cout<<fixed<<setprecision(4)<<(otivuj*x*width*0.0001)<<endl;
    }
    return 0;
}