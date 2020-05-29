package com.ltd.Triangle.TinhTamGiac;

public class TinhTamGiac {
	private int a, b, c;
	private double chuVi, dienTich, p;
	private String ketQua;

	public TinhTamGiac(int a, int b, int c) {
		this.a = a;
		this.b = b;
		this.c = c;
	}

	public boolean kiemTra() {
		return a < b +c && b < a + c && c < a + b;
			
	}

	public void chuVi() {
		chuVi = a + b + c;

	}

	public void dienTich() {
		p = chuVi / 2;
		dienTich = Math.sqrt(p * (p - a) * (p - b) * (p - c));

	}

	public void inTT() {
		System.out.println("chu vi hinh tam giac la: " + chuVi);
		System.out.println("dien tich hinh tam giac la: " + dienTich);
	}
}
