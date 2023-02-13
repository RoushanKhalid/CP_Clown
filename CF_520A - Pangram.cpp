#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,count=0;
	string str;
	cin>>num;
	cin>>str;
	for(int i=0;i<num;i++){
		str[i]=tolower(str[i]);
	}
	sort(str.begin(),str.end());
	for(int i=0;i<num;i++){
		if(str[i]!=str[i+1]){
			count++;
		}
	}
	if(count==26){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}