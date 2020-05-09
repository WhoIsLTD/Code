package com.ltd.HoaDon.KhachHang;

import java.util.Scanner;

public class KhachHangNN extends KhachHang{
	private String quocTich;
	private int dinhMuc;
	public void nhapHD() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhap vao quoc tich khach hang: ");
		quocTich = sc.nextLine();
		System.out.println("nhap vao dinh muc: ");
		
		super.nhapHD();
	}

	@Override
	public void tien() {
		
		thanhTien = soLuong * donGia;
	}
}
