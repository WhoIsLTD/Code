package com.ltd.truyencuoi.truyen;

public class ChuDe {
	private Truyen[] dsTruyen;
	private String ma, ten;
	
	public void nhapGT(String gTriMa, String gTriTen) {
		//gan gtri cho ma ten
	}
	public void themTruyen(Truyen gTriTruyen) {
		// them = gTriTruyen vao ds truyen
	}
	public void themTruyen(String gTriId, String gTriTen, String gTriTacGia, String gTriNgayXB, String gTriNoiDung) {
		//
	}
	public void xoaTruyen(String gTriId) {
		//tim kiem lan luot tung truyen trong ds truyen
	}
	public void docTruyen(String gTriId) {
		//tim kiem lan luot tung truyen trong dstruyen
		//neu truyen co Truyen -> getId() = gTriId
		//thi them vao ds kQ
		
	}

	public Truyen[] timKiemTruyen(int loaiTimKiem, String gTri) {
		Truyen[] dsKQ = null;
		//tim kiem lan luot tung truyen trong dstruyen
		// if loaiTimKiem =1//neu truyen co Truyen -> getId() = gTriId
		// if loaiTimKiem =0//neu truyen co Truyen -> getTen() = gTriTen
		//thi them vao dsKQ
		return dsKQ;}

	public void inTT()
	{
		//in ma, ten
		//lan luot cho tung truyen trong dstuyen thuc hien hanh vi inTT()
		
	}
	public String getMa() {
		return ma;
	}
}
