package com.ltd.thhvhcn.Dinh;

import java.util.Scanner;

public class Dinh {
	private double x, y;
	Scanner sc = new Scanner(System.in);

	public double getX() {
		return x;
	}

	public double getY() {
		return y;
	}

	public void nhapGT(double gTriX, double gTriY) {
		x = gTriX;
		y = gTriY;
//		System.out.println("Nhap vao gia tri x: ");
//		x = sc.nextInt();
//		System.out.println("Nhap vao gia tri y: ");
//		y = sc.nextInt();
	}

	public void inTT() {
		System.out.println("toa do cua x la: " + x + "\n toa do cua y la: " + y);
	}
}
