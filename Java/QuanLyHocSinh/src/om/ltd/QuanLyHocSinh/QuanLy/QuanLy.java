package om.ltd.QuanLyHocSinh.QuanLy;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class QuanLy {
	ArrayList<HocSinh> listHS;

	public QuanLy() {
		listHS = new ArrayList<HocSinh>();
	}

	public void themHS(HocSinh hs) {
		for (int i = 0; i < listHS.size(); i++) {
			if (hs.getTen().equals(listHS.get(i).getTen()))
				System.out.println("trùng tên");
		}
		listHS.add(hs);
		System.out.println("add thành công");
	}

	public void timKiemHSTheoTuoi(int tuoi) {
		for (int i = 0; i < listHS.size(); i++) {
			HocSinh hs = listHS.get(i);
			if (hs.getTuoi() == tuoi)
				System.out.println(listHS.get(i));
		}
	}

	public void xoaHocSinhLonTuoiNhat() {
		int max = 0;
		ArrayList<HocSinh> listHSMax = new ArrayList<HocSinh>();

		for (int i = 0; i < listHS.size(); i++) {
			if (listHS.get(i).getTuoi() > max) {
				max = listHS.get(i).getTuoi();
				listHSMax.clear();
				listHSMax.add(listHS.get(i));
			} 
			else if(listHS.get(i).getTuoi() == max)
				listHSMax.add(listHS.get(i));
		}
		listHS.removeAll(listHSMax);

	}

	public void sapXepTuoiTangDan() {
		Comparator<HocSinh> tcTuoiTangDan = new Comparator<HocSinh>() {
			@Override
			public int compare(HocSinh hs1, HocSinh hs2) {
				return hs1.getTen().compareTo(hs2.getTen());
			}
		};
//			@Override
//			public int compare(HocSinh hs1, HocSinh hs2) {
//				return (hs1.getTuoi() - hs2.getTuoi());
//			}
//		};
		listHS.sort(tcTuoiTangDan);
//		Collections.sort(listHS,(a,b)->a.getTen().compareTo(b.getTen()));
//		listHS.stream().filter(a->a.getTuoi()>0).forEach(System.out::println);
	}

	public void inTT() {
		for (int i = 0; i < listHS.size(); i++) {
			System.out.println(listHS.get(i));
		}
	}
}
