#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *f, *f1, *f2;
    int **a, **p;
    int m, n, i, j, x;
    printf("nhap vao so hang: ");
    scanf("%d", &n);
    printf("nhap vao so cot: ");
    scanf("%d", &m);
    p = a = (int **)calloc(m, sizeof(int *));
    for (i = 0; i < m; i++)
        p[i] = a[i] = (int *)calloc(n, sizeof(int));
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("nhap vao a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    f = fopen("matran.vao", "w");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            fprintf(f, "%d\t", a[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    // Nhap ma tran tu tep “matran.vao”
    // f = fopen("matran.vao", "r");
    // fscanf(f, "%d", &m);
    // fscanf(f, "%d", &n);

    // for (i = 0; i < m; i++)
    //     for (j = 0; j < n; j++)
    //     {
    //         fscanf(f, "%f", &x);
    //         a[i][j] = x;
    //     }
    // fclose(tepvao);
    // In ma tran ra tep “matran.ra”
    f1 = fopen("matran.vao", "r");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            fscanf(f1, "%d", &x);
            p[i][j] = x;
        }
    }
    fclose(f1);
    f2 = fopen("hang1.txt", "w");
    for (j = 0; j < n; j++)
        fprintf(f2, "%d\t", p[0][j]);
    fclose(f2);
}