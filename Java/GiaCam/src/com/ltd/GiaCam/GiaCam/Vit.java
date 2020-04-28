package com.ltd.GiaCam.GiaCam;

public class Vit extends GiaCam {
	private String mao;

	public void nhapGT(String gTrima, String gTriloai, String gTringuonGoc, String gTritheTrang, String gTrigiong,
			String gTrimoiTruongSong, String gTrithucAn, int gTrisoTrung, int gTricanNang, String gTriMao) {
		nhapGT(gTrima, gTriloai, gTringuonGoc, gTritheTrang, gTrigiong, gTrimoiTruongSong, gTrithucAn, gTrisoTrung,
				gTricanNang);
		// nhap tt
	}

	@Override
	public void an() {
		// "vit thi an " -> thucAn
	}

	@Override
	public void keu() {
		// vit keu "quoac "
	}

	@Override
	void inTT() {
		super.inTT();
		// in mao
	}

	void boiLan() {

	}
}
