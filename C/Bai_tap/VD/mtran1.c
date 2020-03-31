#include<stdio.h>
#include<math.h>
void main()
{
	int i, n, m, j, a[100][100], imax, jmax, demle=0, sle=0, tg;
	int imin=0, jmin=0, maxhang, ihang, tonghang;
	//Nhap so luong hang, so luong cot cua ma tran
	do{
		printf("Nhap so luong hang: ");
		scanf("%d",&m);
		printf("Nhap so luong cot: ");
		scanf("%d",&n);
	}while((n<=0)||(n>100)||(m<=0)||(m>100));
	//Nhap ma tran
	for(i = 0; i < m; i++)
    	for(j = 0; j < n; j++)
      	{ 
	  		printf("a[%d][%d] = ", i, j);
	  		scanf("%d", &a[i][j]);
	  	}
	//In ma tran
	printf("Ma tran nhap vao:\n");
   	for (i = 0; i < m; i++)
    { 
		for (j = 0; j < n; j++) printf("%6d", a[i][j]);
	  	printf("\n");
	}
	//Tinh trung binh cong cac so le
	for(i = 0; i < m; i++)
    	for(j = 0; j < n; j++)
      		if(a[i][j] %2 !=0)
      		{demle++; sle+=a[i][j];}
	printf("Trung binh cac so le = %10.2f", 1.0*sle/demle);
	//C2 tìm max
	imax=jmax=0;
	for(i = 0; i < m; i++)
    	for(j = 0; j < n; j++)
      	{	
			if(a[imax][jmax]<a[i][j]) 
      		{
				imax=i; jmax=j;  
			}
			if(a[imin][jmin]>a[i][j]) 
      		{
				imin=i; jmin=j;  
			}
		}
	//Hoan doi 2 vi tri max, min
	tg=a[imax][jmax];
	a[imax][jmax]=a[imin][jmin];
	a[imin][jmin]=tg;
	//In ma tran
	printf("\nMa tran nhap vao:\n");
   	for (i = 0; i < m; i++)
    { 
		for (j = 0; j < n; j++) printf("%6d", a[i][j]);
	  	printf("\n");
	}
	//Tinh tong các hàng
	maxhang=0;ihang=0;
	for(j=0; j<n; j++)
		maxhang=maxhang+a[0][j];
	for(i=0; i<m; i++)
	{
		tonghang=0;
		for(j=0; j<n; j++)
			tonghang=tonghang+a[i][j];
		if(tonghang>maxhang) 
		{
			maxhang=tonghang; ihang=i;
		}
	}
	printf("\nHang %d co gia tri lon nhat %d", ihang, maxhang);
	//printf("\nSo lon nhat cua ma tran = %d tai hang %d, cot %d", a[imax][jmax], imax+1, jmax+1);
	//Sap xep
//	for(i = 0; i < m*n - 1; i++)
//      	for(j = i+1; j < m*n ; j++)
//	 		if(a[i/n][i%n] > a[j/n][j%n])
//		    {
//		       tg = a[i/n][i%n];
//		       a[i/n][i%n] = a[j/n][j%n];
//		       a[j/n][j%n] = tg;
//		    } 
//	printf("\nMa tran sau khi sap xep:\n");
//   	for (i = 0; i < m; i++)
//    { 
//		for (j = 0; j < n; j++) printf("%6d", a[i][j]);
//	  	printf("\n");
//	}
// 	printf("\nPhan tu lon nhat %d tai hang %d, cot %d", a[imax][jmax], imax, jmax);
	getch();
}
