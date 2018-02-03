#include<stdio.h>
void main()
{
	int n,i,c=1;

	
	printf("enter a no.");
	scanf("%d",&n);
		if(n<=20)
	{
	for(i=1;i<=5;i++)
	{
		c=n*i;
	
	printf("%d\t",c);
}
}
else
{

printf("wrong choice");
}
}
