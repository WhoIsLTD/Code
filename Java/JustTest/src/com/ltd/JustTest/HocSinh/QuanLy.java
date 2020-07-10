package com.ltd.JustTest.HocSinh;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class QuanLy {
	ArrayList<HocSinh> ListHS;

	public QuanLy() {
		ListHS = new ArrayList<HocSinh>();
	}

	public void addList(HocSinh hs2) {
		for (int i = 0; i < ListHS.size(); i++)
			if (ListHS.get(i).getTen().equals(hs2.getTen())) {
				System.out.println("Tên đã tồn tại");
			}
			ListHS.add(hs2);
			System.out.println("Đã add thành công!!!");
	}

	public void removeHS() {
		int max = ListHS.get(0).getTuoi();
		for (int i = 0; i < ListHS.size(); i++) {
			if (ListHS.get(i).getTuoi() > max)
				max = ListHS.get(i).getTuoi();
		}
		for (int i = 0; i < ListHS.size(); i++) {
			if (ListHS.get(i).getTuoi() == max)
				ListHS.remove(i);
		}
	}
	public void sapXep() {
		Comparator<HocSinh> listTang= new Comparator<HocSinh>() {
			@Override
			public int compare(HocSinh hs1, HocSinh hs2) {
				return -(hs1.getTuoi()-hs2.getTuoi());
			}
		};
		ListHS.sort(listTang);
		ListHS.forEach(System.out::println);
	}
	public void inTT() {
		for (int i = 0; i < ListHS.size(); i++) {
			System.out.println(ListHS.get(i));
		}
		
	}

}
