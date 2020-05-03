package com.ltd.HVHCN.TuGiac;

import com.ltd.HVHCN.Dinh.Dinh;

public class HinhVuong extends TuGiac {
	public HinhVuong(Dinh d1, Dinh d2, Dinh d3, Dinh d4) {
		super(d1, d2, d3, d4);
		// TODO Auto-generated constructor stub
	}

	private double doDaiCanh;

	public void canh() {
		doDaiCanh = Math.sqrt(Math.pow(d1.getY() - d1.getX(), 2) + Math.pow(d2.getY() - d2.getX(), 2));
	}

	@Override
	public void tinhCV() {
		chuVi = doDaiCanh * 4;

	}

	@Override
	public void tinhDT() {
		dienTich = doDaiCanh * doDaiCanh;

	}

	public void inTT() {
		System.out.println("Do dai canh: " + doDaiCanh);
		System.out.println("Chu vi: " + chuVi + "\nDien tich: " + dienTich);
		super.inTT();
	}
}
