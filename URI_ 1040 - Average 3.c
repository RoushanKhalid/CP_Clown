#include<stdio.h>
int main(){
	float A,B,C,D;
	scanf("%f%f%f%f",&A,&B,&C,&D);
	float avg=((A*2)+(B*3)+(C*4)+(D*1))/10;
	if(avg<5.0){
	   printf("Media: %.1f\n",avg);
		printf("Aluno reprovado.\n");
	}
	if(avg>7.0){
	   printf("Media: %.1f\n",avg);
		printf("Aluno aprovado.\n");
	}
   if(avg>=5.0 && avg<=6.9){
	   printf("Media: %.1f\n",avg);
		printf("Aluno em exame.\n");

		float score;
	   scanf("%f",&score);
    	printf("Nota do exame: ");
    	printf("%.1f\n",score);
    	float NA;
    	NA=(score+avg)/2;
    	if(NA>=5.0){
	    printf("Aluno aprovado.\n");
    	}if(NA<5.0){
 	    printf("Aluno reprovado.\n");
    	}
    	printf("Media final: %.1f\n",NA);
	}
	return 0;
}