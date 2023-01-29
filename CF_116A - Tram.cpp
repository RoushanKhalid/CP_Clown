#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,en,ex;
    int still=0,most=0;
	cin>>t;
	while(t--){
		cin>>ex>>en;
		still=(still-ex)+en;
		if(still>most){
			most=still;
		}
	}
	cout<<most<<endl;
	return 0;
}