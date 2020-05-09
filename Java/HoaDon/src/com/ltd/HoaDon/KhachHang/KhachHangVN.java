package com.ltd.HoaDon.KhachHang;

import java.util.Scanner;

public class KhachHangVN extends KhachHang {
	private String doiTuong;

	public void nhapHD() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhap vao doi tuong khach hang: ");
		doiTuong = sc.nextLine();
		super.nhapHD();
	}

	@Override
	public void tien() {
		thanhTien = soLuong * donGia;
	}
}
