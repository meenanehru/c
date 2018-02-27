#include <stdio.h>

int main()
{
    
	int n,i,i1=0;
	printf("Enter the number :");
    scanf("%d",&n);
    while(n>0)
    {
    
       i=n/10;
       i1=i1+1;
       n=i;
    }
    printf("number of digits of an integer:%d",i1);
	return 0;
}



