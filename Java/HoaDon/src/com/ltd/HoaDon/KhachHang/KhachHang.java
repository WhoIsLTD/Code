package com.ltd.HoaDon.KhachHang;

import java.util.Scanner;

public abstract class KhachHang {
	private String id, name;
	private int soLuong, donGia, nam, CountKHVN;
	private double thanhTien;

	public void nhapHD() {
		Scanner sc = new Scanner(System.in);

		System.out.println("nhap ten khach hang: ");
		name = sc.nextLine();
		System.out.println("nhap ma khach hang: ");
		setId(sc.nextLine());	
		System.out.println("nhap ngay ra hoa don (nam): ");
		setNam(sc.nextInt());
		System.out.println("Nhap vao so luong(KW tieu thu): ");
		setSoLuong(sc.nextInt());
		System.out.println("Nhap vao don gia: ");
		setDonGia(sc.nextInt());
	}
	
	public void inHD() {
		System.out.println("Ten: " + name + " ma: " + getId() + " ngay: " + getNam() +
				" so luong: " + getSoLuong() + " don gia: " + getDonGia() + "thanh tien: " + tien());
	}
	
	public abstract double tien();

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public int getSoLuong() {
		return soLuong;
	}

	public void setSoLuong(int soLuong) {
		this.soLuong = soLuong;
	}

	public double getThanhTien() {
		return thanhTien;
	}

	public double setThanhTien(double thanhTien) {
		return this.thanhTien = thanhTien;
	}

	public int getNam() {
		return nam;
	}

	public void setNam(int nam) {
		this.nam = nam;
	}

	public int getDonGia() {
		return donGia;
	}

	public void setDonGia(int donGia) {
		this.donGia = donGia;
	}

}