package com.ltd.ptbII;

import java.text.DecimalFormat;

public class PhuongTrinhBac2 {
	private double a, b, c, x, x1;
	private String cauTraLoi;

	public PhuongTrinhBac2(double a, double b, double c) {
		this.a = a;
		this.b = b;
		this.c = c;
	}

	private double tinhDelta() {
		return b * b - 4 * a * c;
	}

	public void giaiPT() {
		if (a == 0 && b == 0 && c == 0)
			cauTraLoi = "pt vo so no";
		if (tinhDelta() < 0)
			cauTraLoi = "pt vo nghiem";
		else if (tinhDelta() == 0) {
			DecimalFormat df = new DecimalFormat("#.##");
			x = (-b / a);
			cauTraLoi = "pt co no kep" + df.format(x);
		} else {
			x = (-b - Math.sqrt(tinhDelta())) / (2 * a);
			x1 = (-b + Math.sqrt(tinhDelta())) / (2 * a);
			DecimalFormat df = new DecimalFormat("#.##");
			cauTraLoi = "pt co 2 no:\n" + df.format(x) + " va " + df.format(x1);
		}
	}

	public void InTT() {
		System.out.println(cauTraLoi);
	}

}
