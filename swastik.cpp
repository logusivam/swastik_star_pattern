#include<stdio.h>
main()
{
	int n,mid,i,j;
	printf("Enter the number: ");
	scanf("%d",&n);
	mid=n/2;
	for(i=1;i<=n;i++)	
	{
		for(j=1;j<=n;j++)
		{
			if(i==mid||j==mid||(i==1&&j>=mid)||(j==1&&i<=mid)||(i==n&&j<=mid)||(j==n&&i>=mid))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
