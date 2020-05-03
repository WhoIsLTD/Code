package com.ltd.ChuSo;

import java.util.Scanner;

public class ChuSo {
	int n, i, s;
	Scanner sc = new Scanner(System.in);

	

	public ChuSo(int n) {
		this.n = n;
	}
	

	public void tinhTongChuSo() {
		while (n > 0) {
			i = n % 10;
			s += i;
			n /= 10;
		}
	}

	public void inKQ() {
		System.out.println("Tong cac chu so cua n la: " + s);
	}
}
