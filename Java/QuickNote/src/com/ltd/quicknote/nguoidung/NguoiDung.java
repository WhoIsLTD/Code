package com.ltd.quicknote.nguoidung;

public class NguoiDung {
	SuViecSapToi[] dsSKST;
	SuViecDaQua[] dsSCDQ;

	void lietKeSuKienBoLo() {
		// tim lan luot SuKienSapToi trong dsSkSt, neesu SuKienSapToi nafo cos xacnhanTG
		// = false
		// sai thi in
	}

	void taoGhiChu(SuViecDaQua ghichuSVDQ) {
		// them ghichu
	}

	void taoGhiChu(SuViecSapToi ghiChuSKST) {
		//
	}

	SuViecDaQua[] timKiemGhiChuSKDQ(String gTriTieuDe) {
		SuViecDaQua[] dsKQ = null;
		// day la gia tri ,ac dinh de quy dinh ban dau, tham so dsKetqua la chua cos gi
		// tim lan luot tung sukienDaQua trongds skDaQua, neu sukiensaptoi nao cos
		// tieude =
		// gtritieude thi themvao dskq
		return dsKQ;
	}

	SuViecDaQua[] timKiemGhiChuSKDQ(String gTriTieuDe, String gTriDiaDiem) {
		SuViecDaQua[] dsKQ = null;
		// day la gia tri ,ac dinh de quy dinh ban dau, tham so dsKetqua la chua cos gi
		// tim lan luot tung sukiensaptoi trongdsskst, neu sukiensaptoi nao cos tieude =
		// gtritieude thi themvao dskq
		return dsKQ;
	}

	SuViecSapToi[] timKiemGhiChuSKST(String gTriTieuDe) {
		SuViecSapToi[] dsKQ = null;
		// day la gia tri ,ac dinh de quy dinh ban dau, tham so dsKetqua la chua cos gi
		// tim lan luot tung SuKienSapToi trongdsSKST, neu sukiensaptoi nao cos tieude =
		// gTriTieuDe thi themvao dskq
		return dsKQ;
	}

	SuViecSapToi[] timKiemGhiChuSKST(String gTriTieuDe, String gTriDiaDiem) {
		SuViecSapToi[] dsKQ = null;
		// day la gia tri ,ac dinh de quy dinh ban dau, tham so dsKetqua la chua cos gi
		// tim lan luot tung sukiensaptoi trongdsskst, neu sukiensaptoi nao cos tieude =
		// gtritieude thi themvao dskq
		return dsKQ;
	}

	void xacNhanThamGiaSuKien(String gTriMaGhiChu, boolean gTriXacNhan) {
		// Tim lan luot SuKienSapToi trong dsSKST, nếu maGhiChu = gTriMaGhiChu
		// thì sai SuKienSapToi -> xacNhanTG(v)
	}

	void xemNDGhiChu(String gTriMaGhiChu) {

	}

	void xoaGhiChu(String gTriMa) {
		// tim trong ds neu ghichu nao co ma = gtrima thi xoa kh�?i ds
	}

}
