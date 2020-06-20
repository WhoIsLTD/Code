package com.ltd.HVHCN.TuGiac;

import com.ltd.HVHCN.Dinh.Dinh;
import com.ltd.HVHCN.ihinh.IHinh;

public abstract class TuGiac implements IHinh {
	protected Dinh d1, d2, d3, d4;
	protected double chuVi, dienTich;
	
	public TuGiac(Dinh d1, Dinh d2, Dinh d3, Dinh d4) {
		this.d1 = d1;
		this.d2 = d2;
		this.d3 = d3;
		this.d4 = d4;
	}

	public abstract void tinhCvi();

	public abstract void tinhDTich();

	public void inTT() {
		d1.inTT();
		d2.inTT();
		d3.inTT();
		d4.inTT();
	}

}
