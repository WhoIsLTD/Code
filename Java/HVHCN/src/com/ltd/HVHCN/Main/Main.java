package com.ltd.HVHCN.Main;

import java.util.Scanner;

import com.ltd.HVHCN.Dinh.Dinh;
import com.ltd.HVHCN.HinhTron.HinhTron;
import com.ltd.HVHCN.TuGiac.HinhChuNhat;
import com.ltd.HVHCN.TuGiac.HinhVuong;
import com.ltd.HVHCN.TuGiac.TuGiac;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Dinh d1 = new Dinh(1, 1);
		Dinh d2 = new Dinh(4, 1);
		Dinh d3 = new Dinh(4, -1);
		Dinh d4 = new Dinh(1, -1);

		Dinh d5 = new Dinh(1, 1);
		Dinh d6 = new Dinh(4, 1);
		Dinh d7 = new Dinh(4, -3);
		Dinh d8 = new Dinh(1, -3);
		TuGiac tg1 = new HinhChuNhat(d1, d2, d3, d4);
		TuGiac tg2 = new HinhVuong(d5, d6, d7, d8);
		if (tg1 instanceof HinhChuNhat) {
			((HinhChuNhat) tg1).doDai();
		} else if (tg1 instanceof HinhVuong)
			((HinhVuong) tg1).canh();
		tg1.tinhCvi();
		tg1.tinhDTich();
		tg1.inTT();
		if (tg2 instanceof HinhChuNhat) {
			((HinhChuNhat) tg2).doDai();
		} else if (tg2 instanceof HinhVuong)
			((HinhVuong) tg2).canh();
		tg2.tinhCvi();
		tg2.tinhDTich();
		tg2.inTT();
		HinhTron ht = new HinhTron(3);
		ht.tinhCvi();
		ht.tinhDTich();
		ht.inTT();
	}

}