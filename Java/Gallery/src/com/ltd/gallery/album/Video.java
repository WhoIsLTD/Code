package com.ltd.gallery.album;

public class Video extends Media{
	private int thoiLuong;

	void nhapGT(String gTriLoai, int gTriThoiLuong, String gTriId, String gTriTen, int gTriSize) {
		// nhapGT
		nhapGT(gTriId, gTriTen, gTriSize, gTriLoai);
	}
}
