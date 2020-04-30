package com.ltd.thhvhcn.TuGiac;

import com.ltd.thhvhcn.Dinh.Dinh;

public abstract class TuGiac {
	protected Dinh d1, d2, d3, d4;
	protected double chuVi, dienTich;
	
	public void nhapGT() {
		d1.nhapGT();
		d2.nhapGT();
		d3.nhapGT();
		d4.nhapGT();
		//Dinh gTriD1, Dinh gTriD2, Dinh gTriD3, Dinh gTriD4
	}
	public abstract void tinhCV();
	
	abstract void tinhDT();
	
	public void inTT() {
		d1.inTT();
		d2.inTT();
		d3.inTT();
		d4.inTT();
	}
}
