package com.ltd.PhanSo;

public class PhanSo {
	private int tu, mau;

	public PhanSo(int tu, int mau) {
		this.tu = tu;
		this.mau = mau;
	}
	public int gcd(int tu, int mau) {
		if (tu == 0)
			return mau;
		return gcd(tu, mau %tu);
	}
	public void rutGon() {
		int x = Math.abs(tu);
		int y = Math.abs(mau);
		while (x != y) {
			if (x > y)
				x -= y;
			else
				y -= x;
		}
		tu /= x;
		mau /= x;
	}

	public void cong(PhanSo ps2) {
		PhanSo s = new PhanSo(1, 1);
		s.tu = tu * ps2.mau + ps2.tu * mau;
		s.mau = mau * ps2.mau;
		s.rutGon();
		System.out.println(tu + "/" + mau + " + " + ps2.tu + "/" + ps2.mau + " = " + s.tu + "/" + s.mau);
	}

	public void tru(PhanSo ps2) {
		PhanSo s = new PhanSo(1, 1);
		s.tu = tu * ps2.mau - ps2.tu * mau;
		s.mau = mau * ps2.mau;
		s.rutGon();
		System.out.println(tu + "/" + mau + " - " + ps2.tu + "/" + ps2.mau + " = " + s.tu + "/" + s.mau);
	}

	public void nhan(PhanSo ps2) {
		PhanSo s = new PhanSo(1, 1);
		s.tu = tu * ps2.tu;
		s.mau = mau * ps2.mau;
		s.rutGon();
		System.out.println(tu + "/" + mau + " * " + ps2.tu + "/" + ps2.mau + " = " + s.tu + "/" + s.mau);
	}

	public void chia(PhanSo ps2) {
		PhanSo s = new PhanSo(1, 1);
		s.tu = tu * ps2.mau;
		s.mau = mau * ps2.tu;
		s.rutGon();
		System.out.println(tu + "/" + mau + " / " + ps2.tu + "/" + ps2.mau + " = " + s.tu + "/" + s.mau);
	}
}
