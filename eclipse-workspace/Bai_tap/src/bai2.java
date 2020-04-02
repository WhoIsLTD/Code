
import java.util.Scanner;

public class bai2 {
	public static void main(String[] args) {
		try (Scanner sc = new Scanner(System.in)) {
			System.out.println("nhap vao a: ");
			int a = sc.nextInt();
			System.out.println("nhap vao b: ");
			int b = sc.nextInt();
			System.out.println("nhap vao c: ");
			int c = sc.nextInt();
			double del = (Math.pow(b, 2) - 4 * a * c);
			if (del < 0)
				System.out.println("phuong trinh vo nghiem" + "\n");
			else if (del == 0)
				System.out.print("phuong trinh co nghiem kep: " + (-b / 2 * a) + "\n");
			else
				System.out.print("phuong trinh co 2 nghiem phan biet: " + (-b - Math.sqrt(del)) / (2 * a) + ", "
						+ (-b + Math.sqrt(del)) / (2 * a) + "\n");
		}
	}

}