package com.ltd.HVHCN.HinhTron;

import com.ltd.HVHCN.ihinh.IHinh;

public class HinhTron implements IHinh{
	private int r;
	private double chuVi, dienTich;
	public HinhTron(int r) {
		this.r = r;
	}
	public void inTT() {
		System.out.println("Ban kinh: " + r);
		System.out.println("chu vi: " + chuVi + ", dien tich: " + dienTich);
		
	}
	@Override
	public void tinhDTich() {
		// TODO Auto-generated method stub
			dienTich = Math.PI * r * r;
	}
	@Override
	public void tinhCvi() {
		// TODO Auto-generated method stub
		chuVi = 2 * Math.PI * r;
	}
}
