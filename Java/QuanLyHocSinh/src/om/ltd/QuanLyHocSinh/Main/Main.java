package om.ltd.QuanLyHocSinh.Main;

import om.ltd.QuanLyHocSinh.QuanLy.HocSinh;
import om.ltd.QuanLyHocSinh.QuanLy.QuanLy;

public class Main {
	public static void main(String[] args) {
		QuanLy ql = new QuanLy();
//		HocSinh hs = new HocSinh();
		HocSinh hs1 = new HocSinh(12, "Lê Tiến Đạt3");
		
		HocSinh hs2 = new HocSinh(9, "Lê Tiến Đạt");
		
		HocSinh hs3 = new HocSinh(11, "Lê Tiến Đạt");
		
		HocSinh hs4 = new HocSinh(10, "Lê Tiến Đạt1");
		ql.themHS(hs4);
		ql.themHS(hs1);ql.themHS(hs2);ql.themHS(hs3);

		System.out.println("sắp xếp tăng dần: ");
		ql.sapXepTuoiTangDan();
		ql.inTT();
		System.out.println("tìm kiếm theo tuổi: ");
		ql.timKiemHSTheoTuoi(9);
		
		System.out.println("xóa học sinh tuổi lớn nhất: ");
		ql.xoaHocSinhLonTuoiNhat();
		ql.inTT();

	}
}
