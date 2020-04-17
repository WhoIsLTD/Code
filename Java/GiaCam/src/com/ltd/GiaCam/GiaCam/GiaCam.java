package com.ltd.GiaCam.GiaCam;

public abstract class GiaCam {
	private String ma, loai, nguonGoc, theTrang, giong, moiTruongSong, thucAn;
	private int soTrung, canNang;

	public void nhapGT(String gTrima, String gTriloai, String gTringuonGoc, String gTritheTrang, String gTrigiong,
			String gTrimoiTruongSong, String gTrithucAn, int gTrisoTrung, int gTricanNang) {
		// gan gia tri cho ma, nguon goc , xuat xu, can nang,..
	}

	void inTT() {
		// in tt
	}

	abstract void an();

	abstract void keu();

	void deTrung() {
		// neu la cai so trung tang len 1
	}
}
