#include <stdio.h>
#include <string.h>
typedef struct
{
	char macd[12];
	char ht[30];
	int ns;
} congdan;

void sx(congdan *cd, int n)
{
	int i,j;
	congdan tg;
	//sap xep
	for (i=0; i<n; i++)
		for (j=j+1; j<n; j++)
			if(cd[i].ns>cd[j].ns)
			{
				tg = cd[i]; cd[i]=cd[j]; cd[j]=tg;
			}
		
}

FILE *f;

void main()
{
	int i, n;
	congdan cd[100];
	do{
		printf ("Nhap so nguoi:");
		scanf ("%d", &n);
	} while (n<=0 || n>100);
	
	//Nhap danh sach cong dan
	printf ("\nNhap thong tin cua cong dan:");
	for (i=0; i<n; i++)
	{
		printf ("\nCong dan thu %d:",i+1);
		printf ("\nMa cong dan: ");
		fflush (stdin);
		gets (cd[i].macd);
		printf ("Ho va ten: ");
		fflush (stdin);
		gets (cd[i].ht);
		printf ("Nam sinh: ");
		scanf ("%d",&cd[i].ns);
		//while (strcmp (cd[i].hoten,"") ==0);
	}
	
	//In ra
	printf ("\nDanh sach cong dan:");
	for (i=0; i<n; i++)
	{
		printf ("\n%d:\t",i+1);
		printf ("Ma cong dan: %s\t", cd[i].macd);
		printf ("Ho va ten: %s\t", cd[i].ht);
		printf ("Nam sinh: %d.", cd[i].ns);
	}
	
	sx(cd,n);

	//mo file ghi file
	f = fopen ("Danhsach1.txt","w");
	fprintf (f,"Danh sach cong dan:");
	for (i=0; i<n; i++)
	{
		fprintf (f,"\n%d: ",i+1);
		fprintf (f,"Ma cong dan: %s\t", cd[i].macd);
		fprintf (f,"Ho va ten: %s\t", cd[i].ht);
		fprintf (f,"Nam sinh: %d.", cd[i].ns);
	}
	fclose(f);
	
}

