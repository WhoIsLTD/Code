package com.ltd.quicknote.ghichu;

public class SuViecSapToi extends GhiChu {
	private int thoiGianBaoThuc, soLanBaoThuc;
	private String amThanhBaoThuc;
	private boolean xacNhanThamGia;

	public void nhapGT(String gTriMa, String gTriTieuDe, String gTriNoiDung, String gTriThoiGian, String gTriDiaDiem,
			String gTrithoiGianBaoThuc, int gTrisoLanBaoThuc, String gTriamThanhBaoThuc) {
		//
		nhapGT(gTriMa, gTriTieuDe, gTriNoiDung, gTriThoiGian, gTriDiaDiem);
	}

	public void xacNhanThamGia(boolean gTriXacNhan) {
		// xac nhan
	}

	void baoThuc() {
		// keu len
	}

	@Override
	public void inTT() {
		super.inTT();
		// intgian, soLan, amThanh, xacNhan
	}

}
