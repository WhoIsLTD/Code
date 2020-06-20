package com.ltd.HVHCN.TuGiac;

import com.ltd.HVHCN.Dinh.Dinh;

public class HinhChuNhat extends TuGiac {
	public HinhChuNhat(Dinh d1, Dinh d2, Dinh d3, Dinh d4) {
		super(d1, d2, d3, d4);
		// TODO Auto-generated constructor stub
	}

	private double chieuDai, chieuRong;

	public void doDai() {
		chieuDai = Math.sqrt(Math.pow(d2.getX() - d1.getX(), 2) + Math.pow(d2.getY() - d1.getY(), 2));
		chieuRong = Math.sqrt(Math.pow(d3.getX() - d2.getX(), 2) + Math.pow(d3.getY() - d2.getY(), 2));

	}

	public void inTT() {
		System.out.println("Chieu dai: " + chieuDai + "\nChieu rong: " + chieuRong);
		System.out.println("Chu vi: " + chuVi + "\nDien tich: " + dienTich);
		super.inTT();
	}

	@Override
	public void tinhDTich() {
		// TODO Auto-generated method stub
		dienTich = chieuDai * chieuRong;
	}

	@Override
	public void tinhCvi() {
		// TODO Auto-generated method stub
		chuVi = (chieuDai + chieuRong) * 2;
	}
}
