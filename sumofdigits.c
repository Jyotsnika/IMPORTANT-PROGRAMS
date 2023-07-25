#include<stdio.h>
int sod(int);
void main()
{
	int res;
	int n,sum,rem=0;
	printf("\nenter number");
	scanf("%d",&n);
	printf("\nthe sum of digits in given number is:%d",sod(n));
}
int sod(int n)
{
	int rem=0,sum=0;

	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	if(sum>9)
	{    
	    n=sum;
	    sum=0;
        sod(n);
		
	}
	else
	{
		return sum;
	}
}
