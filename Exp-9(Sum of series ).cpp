#include<stdio.h>
int main()
{
	int i,n,sum=0,c;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=i*i;
		sum=sum+c;
	}
	printf("Sum of numbers:%d",sum);
}
