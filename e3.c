#include <stdio.h>
 
int main(void)
{
	char n;
	printf("n=");
	scanf("%c",&n);
	if(n=='a' && n=='e' && n=='i' && n=='o' && n=='u')
	{
	    printf("it is a vowel");
	}
    else
    {
    	printf("it is not a vowel");
    }
	return 0;
}
 
