package com.ltd.Main;

import com.ltd.PhanSo.PhanSo;

public class Main {
	public static void main(String[] args) {
		PhanSo ps1 = new PhanSo(4, 5);
		PhanSo ps2 = new PhanSo(7, 5);
		ps1.cong(ps2);
		ps1.tru(ps2);;
		ps1.nhan(ps2);
		ps1.chia(ps2);
	}
}
