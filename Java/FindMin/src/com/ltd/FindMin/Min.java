package com.ltd.FindMin;

public class Min {
	int a, b, c, d;

	public Min(int a, int b, int c, int d) {
		this.a = a;
		this.b = b;
		this.c = c;
		this.d = d;
	}
	public int findMin() {
		if (a > b && a > c && a > d)
			return a;
		else if (b > a && b > c && b > d)
			return b;
		else if (c > a && c > b && c > d)
			return c;
		else
			return d;
	}
}
