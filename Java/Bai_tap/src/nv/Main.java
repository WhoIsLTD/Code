package nv;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int maNV,tuoi;
		String hoTen;
		Scanner sc = new Scanner(System.in);
		NhanVien nv1 = new NhanVien(101, 20, "họ tên");
		NhanVien nv2 = new NhanVien(102, 21, "toàn");
		NhanVien nv3 = new NhanVien();
		System.out.println("nhap ma nv: ");
		maNV = sc.nextInt();
		nv3.setMaNV(maNV);
		System.out.println("nhap tuoi: ");
		tuoi = sc.nextInt();
		nv3.setTuoi(tuoi);
		System.out.println("nhap ten: ");
		hoTen = sc.nextLine();
		nv3.setHoTen(hoTen);

	}
}
