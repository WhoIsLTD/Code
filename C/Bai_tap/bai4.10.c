#include<stdio.h>
#include <math.h>

int USCLN(int a, int b)
{
	int x, y;
	x=abs(a); y=abs(b);
	while(x!=y)
		if(x>y) x=x-y;
		else y=y-x;
	return x;
}
void main()
{
	int ts, ms;
	do{
		printf("nhap ts, ms:");
	scanf("%d%d", &ts, &ms);
	} while (ts==0 || ms==0);
	
	if(USCLN(ts, ms)==1) 
		printf("Phan so %d/%d la phan so toi gian", ts,ms);
	else
		printf("Phan so %d/%d KHONG la phan so toi gian", ts,ms);
}
