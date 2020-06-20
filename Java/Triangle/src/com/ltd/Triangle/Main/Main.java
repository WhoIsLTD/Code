package com.ltd.Triangle.Main;

import com.ltd.Triangle.TinhTamGiac.TinhTamGiac;

public class Main {
	public static void main(String[] args) {
		TinhTamGiac tg = new TinhTamGiac(3, 4, 5);
		if (tg.kiemTra()) {
			tg.chuVi();
			tg.dienTich();
			tg.inTT();
		} else {
			System.out.println("khong phai la 3 canh cua tam giac");
		}
	}

}
