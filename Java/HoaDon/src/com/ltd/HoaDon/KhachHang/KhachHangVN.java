package com.ltd.HoaDon.KhachHang;

import java.util.Scanner;

public class KhachHangVN extends KhachHang {
	private String doiTuong;

	public void nhapHD() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhap vao doi tuong khach hang(sh, kd, sx): ");
		doiTuong = sc.nextLine();
		super.nhapHD();
	}

	@Override
	public double tien() {
		return setThanhTien(getSoLuong() * getDonGia());
	}
	public void inHD() {
		System.out.println("Doi tuong khach hang: " + doiTuong);
		super.inHD();
	}

}
