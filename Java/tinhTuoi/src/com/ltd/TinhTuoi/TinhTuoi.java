package com.ltd.TinhTuoi;


import java.util.Scanner;

public class TinhTuoi {
	private int tuoi;
	private int namSinh;
	Scanner sc = new Scanner(System.in);

	public int tinhTuoi() {
		tuoi = 2020 - namSinh;
		return tuoi;
	}

	public void nhapTT() {
		do {
			System.out.println("nhap vao nam sinh: ");
			namSinh = sc.nextInt();
		} while (namSinh < 0 || namSinh > 2020);
	}

	public void inTT() {
		System.out.println("tuoi cua a la: " + tinhTuoi());
	}
}
