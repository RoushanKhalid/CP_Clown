#include<stdio.h>
int main()
{
	int arr[50];
	int n,x,count=0,i;
	scanf("%d%d",&n,&x);
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++){
			if(arr[i]>=arr[x-1] && arr[i]!=0){
				count++;
			}
		}
		printf("%d\n",count);
		return 0;
}