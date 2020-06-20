package com.ltd.QuanLyXe.Xe;

import java.util.Scanner;

public class XeNgoaiThanh extends Xe{
private int soNgayDi;
public void nhapTT() {
	Scanner sc = new Scanner(System.in);
	super.nhapTT();
	System.out.println("nhap vao so ngay di: ");
	soNgayDi = sc.nextInt();
}
public void inTT() {
	super.inTT();
	System.out.println("so ngay di: " + soNgayDi);
}
public int getSoNgayDi() {
	return soNgayDi;
}
public void setSoNgayDi(int soNgayDi) {
	this.soNgayDi = soNgayDi;
}
}
