#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int ucln (int a, int b)
{
	int h, k, kqua;
	h = abs(a), k = abs(b);
	while (h!=k)
	{
		if (h>k) h = h - k;
		else k = k - h;
	}
	return kqua = h;
}

void main()
{ 
	int ts, ms;

	//Nhap tu so mau so
	printf ("Nhap tu so = ");
	scanf ("%d", &ts);
	do{
		printf ("Nhap mau so (khac 0): ");
		scanf ("%d",&ms);
	} while (ms == 0);
	
	//Toi gian chua
	if (ucln (ts,ms) == 1)
		printf ("Phan so %d / %d la phan so toi gian", ts, ms);
	else
		printf ("Phan so %d / %d la KHONG phan so toi gian", ts, ms);

	getch();
}
