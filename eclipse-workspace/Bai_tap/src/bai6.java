

import java.util.Scanner;

public class bai6 {
    private static Scanner sc;

	public static void main(String args[]) {
        int n, i, a, s;
        sc = new Scanner(System.in);
        do {
            System.out.printf("Nhap so nguyen co 6 chu so: \n");
            n = sc.nextInt();
        } while (n < 100000 || n > 999999);

        a = n;
        s = 0;
        while (n > 0) {
            i = n % 10;
            s = s * 10 + i;
            n = n / 10;
        }
        if (s == a)
            System.out.printf(a + " la so thuan nghich doc.");
        else
            System.out.printf(a + " KHONG la so thuan nghich doc.");
    }
}