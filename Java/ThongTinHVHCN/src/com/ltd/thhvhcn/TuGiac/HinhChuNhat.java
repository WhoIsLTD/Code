package com.ltd.thhvhcn.TuGiac;

public class HinhChuNhat extends TuGiac {
	private double chieuDai, chieuRong;

	public void doDai() {
		chieuDai = Math.sqrt(Math.pow(d1.getY() - d1.getX(), 2) + Math.pow(d2.getY() - d2.getX(), 2));
		chieuRong = Math.sqrt(Math.pow(d2.getY() - d2.getX(), 2) + Math.pow(d3.getY() - d3.getX(), 2));

	}

	@Override
	public void tinhCV() {
		chieuDai = Math.sqrt(Math.pow(d1.getY() - d1.getX(), 2) + Math.pow(d2.getY() - d2.getX(), 2));
		chieuRong = Math.sqrt(Math.pow(d2.getY() - d2.getX(), 2) + Math.pow(d3.getY() - d3.getX(), 2));

		chuVi = (chieuDai + chieuRong) * 2;

	}

	@Override
	public void tinhDT() {
		dienTich = chieuDai * chieuRong;
	}

	public void inTT() {
		System.out.println("Chieu dai: " + chieuDai + "\nChieu rong: " + chieuRong);
		super.inTT();
	}
}
