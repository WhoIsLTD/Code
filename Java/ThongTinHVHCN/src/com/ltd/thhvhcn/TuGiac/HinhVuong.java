package com.ltd.thhvhcn.TuGiac;

public class HinhVuong extends TuGiac {
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
		super.inTT();
	}
}
