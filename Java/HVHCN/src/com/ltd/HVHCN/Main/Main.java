package com.ltd.HVHCN.Main;

import java.util.Scanner;

import com.ltd.HVHCN.Dinh.Dinh;
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
		HinhChuNhat hcn = new HinhChuNhat(d1, d2, d3, d4);
		hcn.doDai();
		hcn.tinhCV();
		hcn.tinhDT();
		hcn.inTT();
		d1 = new Dinh(1, 1);
		d2 = new Dinh(4, 1);
		d3 = new Dinh(4, -3);
		d4 = new Dinh(1, -3);
		HinhVuong hv = new HinhVuong(d1, d2, d3, d4);
		hv.canh();
		hv.tinhCV();
		hv.tinhDT();
		hv.inTT();
		
	}

}