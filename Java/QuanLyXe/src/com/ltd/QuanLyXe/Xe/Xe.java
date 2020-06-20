package com.ltd.QuanLyXe.Xe;

import java.util.Scanner;

public class Xe {
	private String maSoChuyen, hoTenTaiXe;
	private int soXe, doanhThu;

	public void nhapTT() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhap vao ma so chuyen: ");
		maSoChuyen = sc.nextLine();
		System.out.println("Nhap vao ho ten tai xe: ");
		hoTenTaiXe = sc.nextLine();
		System.out.println("Nhap vao ma so xe: ");
		soXe = sc.nextInt();
		System.out.println("nhap vao doanh thu: ");
		doanhThu = sc.nextInt();
	}

	public void setMaSoChuyen(String maSoChuyen) {
		this.maSoChuyen = maSoChuyen;
	}

	public void setHoTenTaiXe(String hoTenTaiXe) {
		this.hoTenTaiXe = hoTenTaiXe;
	}

	public void setSoXe(int soXe) {
		this.soXe = soXe;
	}

	public void setDoanhThu(int doanhThu) {
		this.doanhThu = doanhThu;
	}

	public void inTT() {
		System.out.println("Ma so chuyen: " + maSoChuyen + ", ho ten tai xe: " + hoTenTaiXe + ", ma so xe: " + soXe
				+ ", doanh thu: " + doanhThu);
	}
	

}
