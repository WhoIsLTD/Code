package com.ltd.HVHCN.TuGiac;

public class HinhChuNhat extends TuGiac {
	private double chieuDai, chieuRong;

	public void doDai() {
		chieuDai = Math.sqrt(Math.pow(d2.getX() - d1.getX(), 2) + Math.pow(d2.getY() - d1.getY(), 2));
		chieuRong = Math.sqrt(Math.pow(d3.getX() - d2.getX(), 2) + Math.pow(d3.getY() - d2.getY(), 2));

	}

	@Override
	public void tinhCV() {
		chuVi = (chieuDai + chieuRong) * 2;

	}

	@Override
	public void tinhDT() {
		dienTich = chieuDai * chieuRong;
	}

	public void inTT() {
		System.out.println("Chieu dai: " + chieuDai + "\nChieu rong: " + chieuRong);
		System.out.println("Chu vi: " + chuVi + "\nDien tich: " + dienTich);
		super.inTT();
	}
}
