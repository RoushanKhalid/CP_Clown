#include<stdio.h>
int main(){
 int day1,day1h,day1m,day1s,day2,day2h,day2m,day2s;
 int day3,day3h,day3m,day3s;
 scanf("Dia %d",&day1);
 scanf("%d : %d : %d\n",&day1h,&day1m,&day1s);
 scanf("Dia %d",&day2);
 scanf("%d : %d : %d",&day2h,&day2m,&day2s);
 if(day2s<day1s){
      day3s=(day2s+60)-day1s;
      day2m--;	
 }else{
 	day3s=day2s-day1s;
 }
 if(day2m<day1m){
    day3m=(day2m+60)-day1m;
    day2h--;	
 }else{
 	day3m=day2m-day1m;
 }
 if(day2h<day1h){
    day3h=(day2h+24)-day1h;
    day2--;	
 }else{
 	day3h=day2h-day1h;
 }
 day3=day2-day1;
 printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day3,day3h,day3m,day3s);
return 0;
}