

import java.util.Scanner;

public class bai5 {
    private static Scanner sc;

	public static void main(String args[]) {
        int n, i, j;
        sc = new Scanner(System.in);
        do {
            System.out.printf("Nhap so tu nhien n = ");
            n = sc.nextInt();
        } while (n <= 0);

        System.out.println("Cac so nguyen to nho hon " + n + " la: ");
        for (i = 2; i < n; i++) {
            int ngto = 0;
            for (j = 2; j <= Math.sqrt(i); j++) {
                if (i % j == 0) {
                    ngto = 1;
                    break;
                }
            }
            if (ngto == 0) {
                System.out.println(i);
            }

        }
    }
}