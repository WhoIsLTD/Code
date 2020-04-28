package com.ltd.GiaCam.QuanLy;

import com.ltd.GiaCam.GiaCam.Ga;
import com.ltd.GiaCam.GiaCam.Vit;

public class QuanLy {
	private String tenTrangTrai, diaChi;
	Ga[] dsGa;
	Vit[] dsVit;

	public void nhapGT(String gTriTen, String gTriDiaChi) {
		// gan gTri cho ten, diaChi
	}

	public void themGC(Ga gTriGa) {
		// them ga vao dsga
	}

	public void themGC(Vit gTriVit) {
		// them vit vao dsvit
	}

	public void banGiaCam(String gTrimaGiaCam) {
		// tim trong dsGa, neu Ga -> maGc = gTriMaGc thi xoa khoi dsGa
		// tim trong dsVit, neu Vit->maGC = gTriMaGC thi xoa khoidsVit
	}

	public Ga[] timKiemGa(String gTriLoai, String gTriTheTrang) {
		Ga[] dsKQ = null;
		// tim trog dsGa , neu Ga->getLoai() = gTriLoai va Ga->getTheTrang() = thi them
		// vao dsKQ
		return dsKQ;
	}

	public Vit[] timKiemVit(String gTriLoai, String gTriTheTrang) {
		Vit[] dsKQ = null;
		// tim trog dsVit , neu Vit->getLoai() = gTriLoai va Vit->getTheTrang() = thi
		// them vao dsKQ
		return dsKQ;
	}

	public void xemTT(String gTriMa, String gTriLoai) {
		// in ra ten, diaChi
		// duyet dsGa, Ga->inTT
		// duyet dsVit, Vit->inTT
	}

	public void choGaAn() {
		// duyet dsGa, Ga->an()
	}

	public void choVitAn() {
		// duyet dsVit, Vit->an()
	}
}
