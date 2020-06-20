package com.ltd.QuanLyXe.Xe;

import java.util.Scanner;

public class XeNoiThanh extends Xe {
	private int soKM, soTuyen;

	public void nhapTT() {
		Scanner sc = new Scanner(System.in);
		super.nhapTT();
		System.out.println("nhap vao so KM: ");
		soKM = sc.nextInt();
		System.out.println("nhap vao tuyen: ");
		soTuyen = sc.nextInt();
	}

	public int getSoKM() {
		return soKM;
	}

	public void setSoKM(int soKM) {
		this.soKM = soKM;
	}

	public int getSoTuyen() {
		return soTuyen;
	}

	public void setSoTuyen(int soTuyen) {
		this.soTuyen = soTuyen;
	}

	public void inTT() {
		super.inTT();
		System.out.println("so km: " + soKM + ", so tuyen: " + soTuyen);
	}
}
