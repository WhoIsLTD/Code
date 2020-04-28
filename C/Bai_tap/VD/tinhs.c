#include<stdio.h>
#include<conio.h>
#include<math.h>
int gth( int n)
{    
    int gt=1, i;
    for( i = 1 ; i <=n; i++)
        gt = gt*i;
    return gt;
} 
main()
{
     int i, n,m;
     float x, s = 0;
     printf("x="); scanf("%f",&x);
      do
      {
        printf("nhap n="); scanf("%d",&n);
    }
    while(n<0);
      for(i=1;i<=n;i++)
          {
            s = s + pow(-1,i)*gth(n-i+1)*pow(x,i);
          }
      printf("ket qua la %f",s);
      getch();
}
