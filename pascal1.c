/*
5
        1
       1    1
      1    2    1
     1    3    3    1
    1    4    6    4    1
*/
#include<stdio.h>
int main()
{
 int n,i,j,t=1,k=1;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { 
    for(k=1;k<=n-i;k++)
      printf(" ");
   t=1;
    for(j=0;j<i;j++)
    {
          if (j==0||i==1)
              t=1;
          else
      		t= t* (i- j) / j;
                printf("%5d",t); 
    }
   printf("\n");
 }
 return 0;
}
