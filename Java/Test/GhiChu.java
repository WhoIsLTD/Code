class GhiChu {
	int maGhiChu;
	String tieuDe, noiDungGhiChu, diaDiem;

	void nhapTT(int gTrimaGhiChu, String gTritieuDe, String gTrinoiDungGhiChu, String gTridiaDiem) {
		// ...
	}

	void xoaGhiChu() {
		// xoa ghi chu
	}

	void timKiemGhiChu() {
		// tim kiem ghi chu
	}

	void inTT() {
		// ...
	}
}

class SuViecDaQua extends GhiChu {
	int thoiGianXayRa;
	String tenNguoiLienQuan, ketQuaSuViec, danhGia;

	void nhapTT(int gTrimaGhiChu, String gTritieuDe, String gTrinoiDungGhiChu, String gTridiaDiem,
			int gTrithoiGianXayRa, String gTritenNguoiLienQuan, String gTriketQuaSuViec, String gTridanhGia) {
		// ...
	}

	@Override
	void xoaGhiChu() {
		// xoa ghi chu
	}

	@Override
	void timKiemGhiChu() {
		// tim kiem ghi chu
	}


	void inTT() {
		super.inTT();
	}
}

class SuViecSapToi extends GhiChu {
	int thoiGianDienRaSuKien, thoiGianBaoThuc, soLanBaoThuc;
	String xacNhanThamGiaSuKien, amThanhBaoThuc;

	void nhapTT(int gTrimaGhiChu, String gTritieuDe, String gTrinoiDungGhiChu, String gTridiaDiem,
			int gTrithoiGianDienRaSuKien, int gTrithoiGianBaoThuc, int gTrisoLanBaoThuc,
			String gTrixacNhanThamGiaSuKien, String gTriamThanhBaoThuc) {
		// ...
	}

	@Override
	void xoaGhiChu() {
		// xoa ghi chu
		
	}

	@Override
	void timKiemGhiChu() {
		// tim kiem ghi chu
		
	}


	void inTT() {
		super.inTT();
	}
}
