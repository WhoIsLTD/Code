package com.ltd.truyencuoi.quanly;

import com.ltd.truyencuoi.truyen.ChuDe;
import com.ltd.truyencuoi.truyen.Truyen;

public class QuanLy {
	ChuDe dsChuDe[];
	public void taoChuDe(String gTriMa, String gTriTen) {
		//tao chu de
		//sai ChuDe->nhapGT(gTriMa, gTriTen)
		//them ChuDe vao dsChuDe
	}
	public void xoaChuDe(String gTriMa) {
		//tim kiem tring dsChuDe, neu ChuDe nao coChuDe->getMa() = gTriMa
		//thi xoa khoi dsChuDe
	}
	public ChuDe timKIemChuDe(String gTriMa)
	{
		ChuDe kq = null;
		//tim kiem tring dsChuDe, neu ChuDe nao co ma = gTriMa thi gan vao kq
		return kq;
	}
	public void themTruyen(String gTriMa, Truyen gTriTruyen) {
		// them = gTriTruyen vao ds truyen
		//sai ChuDe->themTruyen(gTriTruyen)
	}
	public void themTruyen(String gTriMa, String gTriId, String gTriTen, String gTriTacGia, String gTriNgayXB, String gTriNoiDung) {
		//tim kiem trong dsChuDe, neu ChuDe nao cos ChuDe->getMa() = gtriMa
		//sai ChuDe->themTruyen(gTriId, gTriTen, gTriTacGia, gTriNgayXb, gTriNoiDung)
	}
	public void xoaTruyen(String gTriMa, String gTriId) {
		//tim kiem lan luot tung truyen trong ds truyen neu chuDe nao cos ChuDe->getMa() = gTriMa
		// sai ChuDe->xoaTruyen(gTriId)
	}
	public void docTruyen(String gTriMa, String gTriId) {
		//tim kiem lan luot tung truyen trong dstruyen
		//neu truyen co Truyen -> getMa() = gTriMa
		//sai chuDe->docTruyen(gTriId)
		
	}

	public Truyen[] timKiemTruyen(String gTriMa, int loaiTimKiem, String gTri) {
		Truyen[] dsKQ = null;
		//tim kiem lan luot tung truyen trong dstruyen neu ChuDe nao coChuDe->getMa() = gTriMa
		//sai ChuDe->timKiemTruyen(loaiTimKiem, gTri) va luwu vao dsKQ
		return dsKQ;
}
	public void inTT() {
		
	}
}
