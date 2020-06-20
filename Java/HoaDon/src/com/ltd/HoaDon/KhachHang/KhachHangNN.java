package com.ltd.HoaDon.KhachHang;

import java.util.Scanner;

public class KhachHangNN extends KhachHang {
	private String quocTich;
	private int dinhMuc;

	public void nhapHD() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhap vao quoc tich khach hang: ");
		quocTich = sc.nextLine();
		System.out.println("nhap vao dinh muc: ");
		dinhMuc = sc.nextInt();
		super.nhapHD();
	}

	public void inHD() {
		System.out.println("Quoc tich kh: " + quocTich + "Dinh muc: " + dinhMuc);
		super.inHD();
	}

	@Override
	public double tien() {
		if (getSoLuong() <= dinhMuc) {
			setThanhTien(getSoLuong() * getDonGia());
			return getThanhTien();
		} else {
			setThanhTien(getSoLuong() * getDonGia() * dinhMuc + (getSoLuong() - dinhMuc) * getDonGia() + 2.5);
			return getThanhTien();
		}
	}
}
