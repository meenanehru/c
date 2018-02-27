#include <stdio.h>

int main()
{
    
	int n,i1,i,n1=1;
	printf("Enter the value of n :");
	scanf("%d",&n);
	printf("Enter the power:");
	scanf("%d",&i1);
    for(i=0;i<i1;i++)
    {
    	n1=n1*n;
	}
	printf("%d",n1);
	return 0;
}

