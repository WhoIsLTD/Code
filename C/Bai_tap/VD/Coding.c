#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, gt = 1, s;
    float a, y = 0, x, m;
    printf("nhap vao a:");
    scanf("%f", &a);
    printf("nhap vao n:");
    scanf("%d", &n);
    s = n;
    for (i = n - 1; i >= 0; i--)
    {
        n = n - i;
        for (j = 1; j <= n; j++)
        {
            gt = gt * j;
        }
        x = pow(a, (i + 1));
        m = (gt / x);
        y = sqrt(y + m );
        n = s;
         printf("%f\n", y);
    }
    printf("%f", y);
}
