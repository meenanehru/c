

#include <stdio.h>

int main()
{
    
	int a,b,c;
	printf("Enter a value of a :");
	scanf("%d",&a);
	printf("Enter a value of b :");
	scanf("%d",&b);
	printf("Enter a value of c :");
	scanf("%d",&c);
	if(a>b && a>c)
	{
			printf("%d",a);
	}
	else if(b>a && b>c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
}



