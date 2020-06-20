package com.ltd.MonPhai.Phai;

import com.ltd.MonPhai.Skill.KyNang;

public abstract class MonPhai {
	private String tenMonPhai, tenTruongMon, noiO, monQuy, moTa;
	private KyNang kyNang;
	
	public MonPhai(String tenMonPhai, String tenTruongMon, String noiO, String monQuy, String moTa, KyNang kyNang) {
		this.tenMonPhai = tenMonPhai;
		this.tenTruongMon = tenTruongMon;
		this.noiO = noiO;
		this.monQuy = monQuy;
		this.moTa = moTa;
		this.kyNang = kyNang;
	}
	public void inTT() {
		System.out.println("Tên môn phái: " + tenMonPhai + "\nTên trưởng môn: " + tenTruongMon + "\nNơi ở: " + noiO + "\nMôn quy: " + monQuy + "\nMô tả: " + moTa);
		kyNang.inTT();
	}
	public void soTai(MonPhai mp2) {
		if(kyNang.getSatThuong() > mp2.kyNang.getSatThuong())
			System.out.println(tenMonPhai + " thắng " + mp2.tenMonPhai);
		else if (kyNang.getSatThuong() == mp2.kyNang.getSatThuong())
			System.out.println(tenMonPhai + " hòa " + mp2.tenMonPhai);
		else
			System.out.println(tenMonPhai + " thua " + mp2.tenMonPhai);
		
	}
	public void luyenCong(String vuKhi) {
		System.out.println("Sử dụng " + vuKhi + " để luyện công!");
	}
	public void anUong(String doAn, String thoiGian, String diaDiem) {
		System.out.println(tenMonPhai + " ăn " + doAn);
		System.out.println("Thời gian ăn: " + thoiGian);
		System.out.println("Địa điểm ăn: " + diaDiem);
		
	}
}
