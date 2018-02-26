#include <stdio.h>
 
int main(void) 
{
	int i,n;
	char s[10]="hello";
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%s",s);
	}
	return 0;
}
