#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, demc = 0, dems = 0;
	int x[100], y[100], k, s;
	FILE *f, *f1, *f2, *f3;
	do
	{
		printf("Nhap so phan tu cua day n =");
		scanf("%d", &n);
	} while (n <= 0 || n > 100);
	//Nhap gia tri cac phan tu
	for (i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &x[i]);
	}
	//In day so
	printf("\nDay so nhap vao:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", x[i]);
	//Ghi day so vao file Dayso.txt
	f = fopen("Dayso.txt", "w");
	for (i = 0; i < n; i++)
	{
		fprintf(f, "%d\t", x[i]);
	}
	fclose(f);

	f1 = fopen("Dayso.txt", "r");
	for (i = 0; i < n; i++)
	{
		fscanf(f1, "%d", &k);
		y[i] = k;
	}
	fclose(f1);

	//Doc tu file Chinhphuong.txt va dua ra man hinh
	f2 = fopen("Chinhphuong.txt", "w");
	for (i = 0; i < n; i++)
	{
		s = sqrt(y[i]);
		if (y[i] == pow(s, 2))
		{
			fprintf(f2, "%d\t", y[i]);
		}	
	}
	fclose(f2);
}