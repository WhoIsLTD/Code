package com.ltd.TuVi.TuoiNguoi;

import java.util.Calendar;

public class NamSinh {
	int namSinh, tuoi, canChi;

	public NamSinh(int namSinh) {
		this.namSinh = namSinh;
	}
	public void tinhTuoi() {
		tuoi = Calendar.getInstance().get(Calendar.YEAR) - namSinh;
		System.out.println(tuoi);
	}
	public void tinhCanChi() {
		canChi = (namSinh - 3) % 60;
		System.out.println(canChi);
	}
}
