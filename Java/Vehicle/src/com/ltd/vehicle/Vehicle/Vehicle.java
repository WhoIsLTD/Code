package com.ltd.vehicle.Vehicle;

import java.util.Scanner;

public class Vehicle {
	private String id;
	private int gTri, dungTich;
	private double thue;
	Scanner sc = new Scanner(System.in);

	void nhapTT() {
		System.out.println("Nhap vao ma xe: ");
		setId(sc.nextLine());
		System.out.println("Nhap vao gia tri xe: ");
		setgTri(sc.nextInt());
		System.out.println("Nhap vao dung tich xe: ");
		setDungTich(sc.nextInt());
	}

	double tinhThue() {
		if (getDungTich() > 200)
			thue = 0.05 * getgTri();
		else if (getDungTich() > 100)
			thue = 0.03 * getgTri();
		else
			thue = 0.01 * getgTri();
		return thue;
	}

	void inTT() {
		System.out.println("Ma xe: " + id + " Gia tri xe: " + getgTri() + " Dung tich xe: " + getDungTich()
				+ " Gia tri sau khi tru thue: " + (gTri - tinhThue()));
	}

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public int getgTri() {
		return gTri;
	}

	public void setgTri(int gTri) {
		this.gTri = gTri;
	}

	public int getDungTich() {
		return dungTich;
	}

	public void setDungTich(int dungTich) {
		this.dungTich = dungTich;
	}

}
