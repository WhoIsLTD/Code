package com.ltd.HVHCN.Main;

import java.util.Scanner;

import com.ltd.HVHCN.Dinh.Dinh;
import com.ltd.HVHCN.TuGiac.HinhChuNhat;
import com.ltd.HVHCN.TuGiac.HinhVuong;


public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HinhChuNhat hcn = new HinhChuNhat();
		Dinh d1 = new Dinh();
		Dinh d2 = new Dinh();
		Dinh d3 = new Dinh();
		Dinh d4 = new Dinh();
		d1.nhapTT(1, 1);
		d2.nhapTT(4, 1);
		d3.nhapTT(4, -1);
		d4.nhapTT(1, -1);
		hcn.nhapGT(d1, d2, d3, d4);
		hcn.doDai();
		hcn.tinhCV();
		hcn.tinhDT();
		hcn.inTT();
		HinhVuong hv = new HinhVuong();
		d1.nhapTT(1, 1);
		d2.nhapTT(4, 1);
		d3.nhapTT(4, -3);
		d4.nhapTT(1, -3);
		hv.nhapGT(d1, d2, d3, d4);
		hv.canh();
		hv.tinhCV();
		hv.tinhDT();
		hv.inTT();
		
	}

}