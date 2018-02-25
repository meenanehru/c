#include<stdio.h>
#include<conio.h>
void main()
{
      int n;
      printf("Enter the number :");
      scanf("%d",&n);
      if(1<=n && 100000>=n)
      {
           printf("poasitive");
      }
      else if(n==0)
      {
          printf("Zero");
      }
      else
      {
           printf("negative");
     }
     getch();
}
