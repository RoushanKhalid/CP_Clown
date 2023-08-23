#include<stdio.h>
#include<string.h>
int main(){
    int N,frog=0,rat=0,rabbit=0,animal=0,total;
    char type;
    scanf("%d",&N);
    while(N--){
        scanf("%d %c",&animal,&type);
        if(type=='C'){
			rabbit+=animal;
		}else if(type=='R'){
			rat+=animal;
		}else if(type=='S'){
			frog+=animal;
		}
    }
    total=frog+rabbit+rat;
    double pfrog=(frog*100.00)/total;
    double prat=(rat*100.00)/total;
    double prabbit=(rabbit*100.00)/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2lf %%\n",prabbit);
    printf("Percentual de ratos: %.2lf %%\n",prat);
    printf("Percentual de sapos: %.2lf %%\n",pfrog);
    return 0;
}