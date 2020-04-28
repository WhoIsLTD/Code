
import java.util.Scanner;

public class bai3 {
    private static Scanner sc;
	public static boolean namNhuan(int nam) {
        return nam % 4 == 0 && (nam % 400 == 0 || nam % 100 != 0);
    }
    public static void main(String[] args) {
        sc = new Scanner(System.in);
        System.out.println("nhap vao thang ");
        int thang = sc.nextInt();
        System.out.println("nhap vao nam ");
        int nam = sc.nextInt();
        System.out.println("thang " + thang + " nam " + nam + " co so ngay la: ");
        switch (thang) {
            case 1:
                System.out.println("31");
                break;
            case 2:
                if (namNhuan(nam))
                    System.out.println("29");
                else
                    System.out.println("28");
                break;
            case 3:
                System.out.println("31");
                break;
            case 4:
                System.out.println("30");
                break;
            case 5:
                System.out.println("31");
                break;
            case 6:
                System.out.println("30");
                break;
            case 7:
                System.out.println("31");
                break;
            case 8:
                System.out.println("31");
                break;
            case 9:
                System.out.println("30");
                break;
            case 10:
                System.out.println("31");
                break;
            case 11:
                System.out.println("30");
                break;
            case 12:
                System.out.println("31");
                break;
        }

    }

}