package com.ltd.QuanLyXe.QuanLy;

import java.util.ArrayList;

import com.ltd.QuanLyXe.Xe.XeNgoaiThanh;
import com.ltd.QuanLyXe.Xe.XeNoiThanh;

public class QuanLy {
	ArrayList<XeNoiThanh> nt = new ArrayList<XeNoiThanh>();
	ArrayList<XeNgoaiThanh> ngt = new ArrayList<XeNgoaiThanh>();

	public void themXe(XeNoiThanh xe) {
		for (int i = 0; i < nt.size(); i++) {
			if (nt.get(i).getHoTenTaiXe().equals(xe.getHoTenTaiXe()))
				System.out.println("Đã tồn tại tên ");
		}
		nt.add(xe);
	}

	public void themXe(XeNgoaiThanh xe) {
		for (int i = 0; i < ngt.size(); i++) {
			if (ngt.get(i).getHoTenTaiXe().equals(xe.getHoTenTaiXe()))
				System.out.println("Đã tồn tại tên ");
		}
		ngt.add(xe);
	}

	public void hienThi() {
		for (int i = 0; i < ngt.size(); i++) {
			ngt.get(i).inTT();
		}
		for (int i = 0; i < nt.size(); i++) {
			nt.get(i).inTT();
		}
	}

	public int tinhTong(int n) {
		int s = 0;
		if (n == 0)
			for (int i = 0; i < nt.size(); i++) {
				s += nt.get(i).getDoanhThu();
			}
		else
			for (int i = 0; i < ngt.size(); i++) {
				s += ngt.get(i).getDoanhThu();
			}
		return s;
	}

}
