#include<bits/stdc++.h>
using namespace std;
int main(){
    double arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3,greater<double>());

    if(arr[1]+arr[2]<=arr[0]){
        printf("NAO FORMA TRIANGULO\n");
    }else if(arr[0]*arr[0]==arr[1]*arr[1]+arr[2]*arr[2]){
        printf("TRIANGULO RETANGULO\n");
    }else if(arr[0]*arr[0]>arr[1]*arr[1]+arr[2]*arr[2]){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(arr[0]*arr[0]<arr[1]*arr[1]+arr[2]*arr[2]){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(arr[0]==arr[1] && arr[1]==arr[2]){
        printf("TRIANGULO EQUILATERO\n");
    }else if(arr[0]==arr[1] || arr[1]==arr[2]){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}