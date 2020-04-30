package com.ltd.thhvhcn.TuGiac;

import com.ltd.thhvhcn.Dinh.Dinh;

public abstract class TuGiac {
	protected Dinh d1, d2, d3, d4;
	protected double chuVi, dienTich;
	Dinh d = new Dinh();
	
<<<<<<< HEAD
	public void nhapGT(Dinh gTriD1, Dinh gTriD2, Dinh gTriD3, Dinh gTriD4) {
		d1 = d.nhapGT(1, 2);
		d2 = gTriD2;
		d3 = gTriD3;
		d4 = gTriD4;
		//
=======
	public void nhapGT() {
		d1.nhapGT();
		d2.nhapGT();
		d3.nhapGT();
		d4.nhapGT();
		//Dinh gTriD1, Dinh gTriD2, Dinh gTriD3, Dinh gTriD4
>>>>>>> 26f4aada19bbbbb0771d6c5e802f1d394b988727
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
