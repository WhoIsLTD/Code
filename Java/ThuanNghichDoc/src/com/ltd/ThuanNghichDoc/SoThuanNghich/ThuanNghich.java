package com.ltd.ThuanNghichDoc.SoThuanNghich;

public class ThuanNghich {
	private int n, dVi, s, temp, dem = 0;
	private String kQua;

	public ThuanNghich(int n) {
		this.n = n;
		temp = n;
	}
	public void kTra() {
		if (temp > 0) {
			dVi = temp % 10;
			s = s * 10 + dVi;
			temp /= 10;
			dem += 1;
			if (s != n || dem % 2 != 0)
				kQua = "khong la so thuan nghich doc";
			else
				kQua = "la so thuan nghich doc";
			kTra();
		}

	}

	public void inTT() {
		System.out.println(kQua);
	}

}
