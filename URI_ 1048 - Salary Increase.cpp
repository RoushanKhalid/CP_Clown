#include<bits/stdc++.h>
using namespace std;
int main(){
    double salary,salarywithbonus,total,percentage;
    cin>>salary;
    if(salary>=0 && salary<=400.00){
        percentage=0.15;
    }
    else if(salary>=400.01 && salary<=800.00){
        percentage=0.12;
    }
    else if(salary>=800.01 && salary<=1200.00){
        percentage=0.1;
    }
    else if(salary>=1200.01 && salary<=2000.00){
        percentage=0.07;
    }else{
        percentage=0.04;
    }
    total=salary*percentage;
    salarywithbonus=salary+total;
    cout << "Novo salario: " << fixed << setprecision(2) << salarywithbonus<< endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << total << endl;
    cout << "Em percentual: "<< fixed << setprecision(0) << percentage*100 << " %" << endl;
    return 0;
}