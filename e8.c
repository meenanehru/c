#include<stdio.h>
int main()
{
	int a,t=0,i;
	scanf("%d",&a);
	if(a>0)
	{
		for(i=1;i<=a;i++)
		{
			t=i+t;
		}
		
		printf("%d",t);
	}
	else
	{
		printf("enter natural numbers");
	}

}
