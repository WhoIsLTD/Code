#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
	int a[100][100], i,j,m,n;
	do
	{  
	   printf("Nhap vao so hang m = ");
	   scanf("%d",&m);
	   printf("Nhap vao so cot n = ");
	   scanf("%d",&n);
	}
	while(n<=0||n>100||m<=0||m>100);
	//nhap ma tran
	printf ("\n");
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   {
			printf("a[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	//in ma tran
	printf ("\nMa tran:\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++) printf("%5d",a[i][j]);
	   printf("\n");
	}
	//tim max min va vi tri max min
	int imax,jmax,imin,jmin;
	imax=jmax=imin=jmin=0;
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   {    
			if(a[imax][jmax]<a[i][j])
         {
				imax=i;
				jmax=j;
			}
	      if(a[imin][jmin]>a[i][j])
	   	{
				imin=i; 
				jmin=j;
			}
	   }
	   
	printf("\nMax = a[%d][%d] = %d",imax,jmax,a[imax][jmax]);
	printf("\nMin = a[%d][%d] = %d\n",imin,jmin,a[imin][jmin]);
	
	int max,min;
	max=abs(a[imax][jmax]);
	min=abs(a[imin][jmin]);
	
	//nhap x ktra x thuoc ma tran ko , co bn,vitri cuoi mang
	int x,demx=0,ivtcx,jvtcx;
	printf("\nNhap vao so nguyen x = ");
	scanf("%d",&x);
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   { 
			if (x==a[i][j])
	      {
				demx++;
				ivtcx=i;
				jvtcx=j;
			}
	    }
	if(demx!=0)
	{
	  printf("\n%d xuat hien trong ma tran %d lan.",x,demx);
	  printf("\n\nVi tri cuoi: a[%d][%d] = %d ",ivtcx,jvtcx,x);}
	//phan tu chia het cho 2,5 SAIIII ROIIIII
	int dem25=0;
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
		{
			if (a[i][j]%2==0&&a[i][j]%5==0)
	   	dem25++;
		}
		
	if(dem25!=0) 
	printf("\n\nCo %d phan tu chia het cho 2 va 5.",dem25);
	
	// tbc cac so duong
	int tong=0,len=0;
	float tbc;
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   { 
			if (a[i][j]>0)
	      {  
				tong+=a[i][j];
	         len++;
			}
		}
	tbc=tong*1.0/len;
	printf("\n\nTBC cac so duong la: %f ",tbc);
	
	//sap xep mang tang dan
	int tg,k,h;
	for(i=0;i<m;i++)
	{ 
		for(j=0;j<-1;j++)
	   	for (k=j+1;k<n;k++)
	   	{ 
		 		if(a[i][j]>a[i][k])
		 			{
					 tg=a[i][j];
		          a[i][j]=a[i][k];
		          a[i][k]=tg;
					}
				}
	   }
	for(j=0;j<n;j++)
	{
		for(i=0;i<m-1;i++)
			for (h=i+1;h<m;h++)
		   { 
				if(a[i][j]>a[h][j])
		      {  tg=a[i][j];
		         a[i][j]=a[h][j];
		         a[h][j]=tg;
				}     
		   }
	}
	printf("\n\nMa tran sap xep tang dan la:\n");
	for(i=0;i<m;i++)
	  { for(j=0;j<n;j++)
	    printf("%5d",a[i][j]);
	      printf("\n");}
	  
	// in ra cac so nguyen to
	int nt,f;
	for(i=0;i<m;i++)
	  {for(j=0;j<n;j++)
	   {if (a[i][j]>1)
	     {
	        nt=1;
	        for(f=2;f<(a[i][j]);f++)
	        {
		       if(a[i][j]%f==0) 
		       {  
			     nt=0;break;
				}
		    }
	    if(nt==1) printf("\na[%d][%d] = %d la so nguyen to",i+1,j+1,a[i][j]);
	      }
		}
	}
    //tim ucln cua max min
	
	while(max!=min)
	{ 
	  if (max>min)
	      max-=min;
	  else min-=max;
	}
	printf("\n\nUCLN max min la: %d",max);
	//hang co tong lon nhat
	int s=0,maxs,imaxs=0;
	for(j=0;j<n;j++)
	   s+=a[0][j];
	maxs=s;
	for(i=1;i<m;i++)
	{  s=0;
	   for(j=0;j<n;j++)
	   s+=a[i][j];
	   if(maxs<s){maxs=s;imaxs=i;}
	}
	printf("\n\nTong ptu cua hang %d la lon nhat max = %d ",imaxs,maxs);
	//cot co tong nho nhat
	int t=0,mins,jmins=0;
	for(i=0;i<n;i++)
	   t+=a[i][0];
	mins=t;
	for(j=1;j<m;j++)
	{  t=0;
	   for(i=0;i<n;i++)
	   t+=a[i][j];
	   if(mins>t){mins=t;jmins=j;}
	}
	printf("\nTong ptu cua cot %d la nho nhat min = %d ",jmins,mins);
	getch();
}
	
