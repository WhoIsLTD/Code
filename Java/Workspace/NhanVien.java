class NhanVien extends ConNguoi {
	String maNv, chucVu;
	int luong;

	void lamViec() {
		// ...
	}

	void vietBaoCao() {
		// ...
	}

	void nhapGT(String gTriHoTen, String gTriGioiTinh,
	String gTriDiaChi, int gTriTuoi, String maNv, String chucVu,
	int luong){
		super.nhapTT(gTriHoTen, gTriGioiTinh, gTriDiaChi, gTriTuoi);
	}

	@Override
	void anUong() {
		//
	}

	@Override
	void diChuyen() {
		// di chuyen bang xe
	}

	@Override
	void inTT() {
		super.inTT();
	}

}