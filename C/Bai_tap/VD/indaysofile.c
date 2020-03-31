#include <stdio.h>
FILE *f;
void main ()
{
	int i, n, a[100];
	do{
		printf ("Nhap so phan tu cua day:");
		scanf ("%d", &n);
	} while (n<=0 || n>100);
	
	//nhap day
	for (i=0; i<n; i++)
	{
		printf ("Nhap phan tu thu %d:", i+1);
		scanf ("%d", &a[i]);
	}
	
	//in ra day
	printf ("\nDanh sach cac so nhao vao:\n");
	for (i=0; i<n; i++)
		printf ("a[%d] = %d", i+1, a[i]);
		
	//mo & ghi vao file
	f = fopen ("Danhsach.txt","w");
	fprintf (f,"\nDanh sach cac so nhao vao:\n");
	for (i=0; i<n; i++)
		fprintf (f,"a[%d] = %d", i+1, a[i]);
	
	//dong file
	fclose(f);


}
