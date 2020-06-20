package com.ltd.MonPhai.Skill;

public abstract class KyNang {
	private String tenKyNang, thuocTinh, moTa;
	private int satThuong;
	public KyNang(String tenKyNang, String thuocTinh, String moTa, int satThuong) {
		this.tenKyNang = tenKyNang;
		this.thuocTinh = thuocTinh;
		this.moTa = moTa;
		this.satThuong = satThuong;
	}
	public void inTT() {
		System.out.println("Tên: " +  tenKyNang + "\nThuộc tính: " + thuocTinh + "\nMô tả: " + moTa + "\nSát thương: " + satThuong);
	}
	public int getSatThuong() {
		return satThuong;
	}


	
}
