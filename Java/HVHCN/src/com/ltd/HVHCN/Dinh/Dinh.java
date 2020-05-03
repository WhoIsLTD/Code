package com.ltd.HVHCN.Dinh;

import java.util.Scanner;

public class Dinh {
	private double x, y;
	Scanner sc = new Scanner(System.in);

	
	public Dinh(double x, double y) {
		this.x = x;
		this.y = y;
	}

	public double getX() {
		return x;
	}

	public double getY() {
		return y;
	}
	public void inTT() {
		System.out.println("(" + x + ", " + y + ")");
	}
}
