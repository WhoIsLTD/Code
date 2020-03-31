

import java.util.Scanner;

public class bai4 {
    private static Scanner sc;
    public static void main(String args[]) {

        int n, i;
        sc = new Scanner(System.in);

        System.out.printf("Nhap so nguyen n = ");
        n = sc.nextInt();
        int ngto = 0;
        if (n < 2)
            ngto = 1;
        for (i = 2; i <= (int) Math.sqrt(n); i++) {
            if (n % i == 0) {
                ngto = 1;
                break;
            }
        }
        if (ngto == 0)
            System.out.println(n + " la so nguyen to");
        else
            System.out.println(n + " KHONG la so nguyen to");
    }
}