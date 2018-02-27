#include <stdio.h>

int main()
{
    
	int n[10],k,i,n1;
	printf("Enter the number :");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("n%d=",i);
        scanf("%d",&n[i]);
    }
    printf("k=");
    scanf("%d",&k);
    printf("%d",n[k-1]);
	return 0;
}



