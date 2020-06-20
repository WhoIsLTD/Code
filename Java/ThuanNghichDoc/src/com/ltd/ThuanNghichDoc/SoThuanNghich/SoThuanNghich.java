package com.ltd.ThuanNghichDoc.SoThuanNghich;

public class SoThuanNghich {
	private int n, n1, n2, n3, n4, n5, n6, s = 0, i;
	private String kQua;
	
	public SoThuanNghich(int n) {
		this.n = n;
	}
	public void kTra() {
		if(n>99999 && n <1000000) {
			n1 = n%10;
			n2 = n/10%10;
			n3 = n/100%10;
			n4 = n/1000%10;
			n5 = n/10000%10;
			n6 = n/100000;
			s = ((((n1*10+n2)*10+n3)*10+n4)*10+n5)*10+n6;
			if(s == n)
				kQua = "la so thuan nghich doc" + s;
			else
				kQua = "k la so thuan nghich doc" + s;
		}
		else
			kQua = "k la so 6 chu so";
	}
	public void inTT() {
		System.out.println(kQua);
	}
}
