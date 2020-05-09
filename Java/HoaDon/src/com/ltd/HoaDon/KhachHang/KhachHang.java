package com.ltd.HoaDon.KhachHang;

import java.util.Scanner;

public abstract class KhachHang {
	protected String id, name, ngay;
	protected int soLuong, donGia, thanhTien;

	public void nhapHD() {
		Scanner sc = new Scanner(System.in);
		System.out.println("nhap ten khach hang: ");
		name = sc.nextLine();
		System.out.println("nhap ma khach hang: ");
		id = sc.nextLine();	
		System.out.println("nhap ngay ra hoa don (ngay/thang/nam): ");
		ngay = sc.nextLine();
		System.out.println("Nhap vao so luong: ");
		soLuong = sc.nextInt();
		System.out.println("NHap vao don gia: ");
		donGia = sc.nextInt();
	}
	public void inHD() {
		System.out.println("Ten: " + name + " ma: " + id + " ngay: " + ngay +
				" so luong: " + soLuong + " don gia: " + donGia);
	}
	
	public abstract void tien();

}