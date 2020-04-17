package com.ltd.GiaCam.GiaCam;

public class Ga extends GiaCam {
	private int soCua;

	public void nhapGT(String gTrima, String gTriloai, String gTringuonGoc, String gTritheTrang, String gTrigiong,
			String gTrimoiTruongSong, String gTrithucAn, int gTrisoTrung, int gTricanNang, int soCua) {

		nhapGT(gTrima, gTriloai, gTringuonGoc, gTritheTrang, gTrigiong, gTrimoiTruongSong, gTrithucAn, gTrisoTrung,
				gTricanNang);
		// gan gtri cho soCua
	}

	@Override
	public void an() {
		// "ga thi an " -> thucAn
	}

	@Override
	public void keu() {
		// ga keu "o o o "
	}

	void boiDat() {
//
	}

	@Override
	void inTT() {
		super.inTT();
		// insoCUa
	}

}
