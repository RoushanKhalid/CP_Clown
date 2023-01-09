#include<stdio.h>
int main()
{
	int t,x,y,z,count=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&x,&y,&z);
		if(x+y+z>=2){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}