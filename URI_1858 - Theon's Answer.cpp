#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N;
    int arr[N+1];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int min = *min_element(arr, arr+N);
    for(int i = 0; i<N; i++){
        if(min == arr[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}