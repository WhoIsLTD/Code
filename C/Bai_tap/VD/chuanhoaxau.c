#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
void main ()
{
	char x[100];
	int i, j, k;
	printf("Nhap xau tu ban phim: ");
    gets(x);
    // hien thi chuoi
    printf("Chuoi vua nhap la: ");
    puts(x);
    //Xoa cach dau xau
    while (x[0]==' ')
    	for (i=1;x[i]!=0;i++)
    		x[i-1]=x[i];
    //Xoa cach cuoi xau
    k = strlen(x);
    while (x[k-1]==' ' && k>0)
    	x[--k]=0;
    //Xoa cach giua xau
    for (i=1;i<k;)
    	if ((x[i]==' ') && (x[i-1]==' '))
    		for (j=i;x[j]!=0;j++)
    			x[j]=x[j+1];
    	else i++;	
    //lam sao de dau nhay hien o cuoi cau?
    printf ("Xau da chuan hoa: ");
    puts (x);
    getch();
}
