#include <stdio.h>
#include <stdlib.h>
int max(int x, int y)
{
    if (x>y)
    return x;
    return y;
}
int main()
{  int a[5][5],sum,best=-2e9,i,j,c,b,t,k;
    for (int i=0; i<4; i++)
      for (int j=0; j<5; j++)
        scanf("%d",&a[i][j]);
    for (i=0; i<4; i++)
    { for(j=0; j<5; j++)
       {
          for ( b=i; b<4; b++)
            {     for ( c=j; c<5; c++)
                     { sum=0;
                      for (int k=i; k<=b; k++)
                       {for (int t=j; t<=c; t++)
                         sum+=a[k][t];
                       }
                       best=max(best,sum);
            
                     }

            }
          
              
       }
    }
  printf("%d",best);
    return 0;
}