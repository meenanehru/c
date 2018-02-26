include <stdio.h> 
int main(void) {
   int n=3;
   printf("n=%d",n);
   if(1<=n && n<=100000)
   {
   	printf("positive");
   }
   else if(n==0)
   {
   	printf("zero");
   }
   else
   {
   	printf("negative");
   }
	return 0;
}
 
