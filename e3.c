#include <stdio.h>
 
int main(void)
{
	char n;
	printf("n=");
	scanf("%c",&n);
	if(n=='a' && n=='e' && n=='i' && n=='o' && n=='u')
	{
	    printf(" vowel");
	}
    else
    {
    	printf("constant");
    }
	return 0;
}
 
