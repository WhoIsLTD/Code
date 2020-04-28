

import java.util.Scanner;

public class matrix {
    private static Scanner sc;
	public static void maTran(int a[][],int m, int n)
    {
        int i, j;
        System.out.printf("Nhap cac phan tu trong ma tran 1: \n");
        sc = new Scanner(System.in);
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++) {
                System.out.print("a[" + (i + 1) + "," + (j + 1) + "] = ");
                
                a[i][j] = sc.nextInt();
            }
    }
    public static void main(String args[]) {
        int i, j;
        // Nhap so hang so cot cua ma tran
        i = 1;j = 10;
        do {
        if(i>j) {
        break;
        }
        j--;
        } while (++i <5);
    System.out.println("i = " +i+" and j = "+j);
    
    }
}