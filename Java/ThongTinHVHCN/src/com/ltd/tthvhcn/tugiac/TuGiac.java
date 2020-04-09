package com.ltd.tthvhcn.tugiac;

import com.ltd.tthvhcn.dinh.Dinh;

public abstract class TuGiac {
	protected Dinh d1, d2, d3, d4;
	protected double chuVi, dienTich;
	
	public void nhapGT(Dinh gTriD1, Dinh gTriD2, Dinh gTriD3, Dinh gTriD4) {
		// gan gtri d1, d2, d3, d4
	}
	abstract void tinhCV();
	
	abstract void tinhDT();
	
	void inTT() {
		d1.inTT();
		d2.inTT();
		d3.inTT();
		d4.inTT();
		// in chuVi, dienTich
	}
}
