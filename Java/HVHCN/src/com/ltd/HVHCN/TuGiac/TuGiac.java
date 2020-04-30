package com.ltd.HVHCN.TuGiac;

import com.ltd.HVHCN.Dinh.Dinh;

public abstract class TuGiac {
	protected Dinh d1, d2, d3, d4;
	// protected Dinh d1 = new Dinh();
	// protected Dinh d2 = new Dinh();
	// protected Dinh d3 = new Dinh();
	// protected Dinh d4 = new Dinh();
	protected double chuVi, dienTich;

	public void nhapGT(Dinh gTriD1, Dinh gTriD2, Dinh gTriD3, Dinh gTriD4) {
		d1 = gTriD1;
		d2 = gTriD2;
		d3 = gTriD3;
		d4 = gTriD4;
		// 
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
