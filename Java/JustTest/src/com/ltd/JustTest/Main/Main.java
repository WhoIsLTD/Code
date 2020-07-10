package com.ltd.JustTest.Main;

import com.ltd.JustTest.HocSinh.HocSinh;
import com.ltd.JustTest.HocSinh.QuanLy;

public class Main {
	public static void main(String[] args) {
		QuanLy ql = new QuanLy();
		HocSinh hs1 = new HocSinh(10, "Aê Tiến Đạt3");

		HocSinh hs2 = new HocSinh(8, "Lê Tiến Đạt");

		HocSinh hs3 = new HocSinh(8, "Lê Tiến Đạt");

		HocSinh hs4 = new HocSinh(14, "Lê Tiến Đạt1");
		ql.addList(hs4);
		ql.addList(hs1);
		ql.addList(hs2);
		ql.addList(hs3);
		ql.sapXep();
		ql.inTT();
	}
}
