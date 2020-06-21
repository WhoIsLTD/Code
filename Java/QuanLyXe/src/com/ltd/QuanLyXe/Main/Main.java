package com.ltd.QuanLyXe.Main;

import java.util.Scanner;

import com.ltd.QuanLyXe.QuanLy.QuanLy;
import com.ltd.QuanLyXe.Xe.XeNgoaiThanh;
import com.ltd.QuanLyXe.Xe.XeNoiThanh;

public class Main {
	static void menu() {
		System.out.println("1. Them xe\n" + "2. in xe\n" + "3. tong doanh thu tung loai\n");
	}

	public static void main(String[] args) {
		XeNoiThanh[] xeNT = new XeNoiThanh[50];
		XeNgoaiThanh[] xeNgT = new XeNgoaiThanh[50];
		QuanLy ql = new QuanLy();
		int n, countNT = 0, countNgT = 0;
		Scanner sc = new Scanner(System.in);
		menu();
		while (true) {

			int chon;
			System.out.println("nhap menu: ");
			chon = sc.nextInt();
			switch (chon) {
			case 1:
				System.out.println("chon xe (1. ngoai thanh, 2. noi thanh: ");
				int chonXe = sc.nextInt();
				if (chonXe == 1) {
					xeNT[countNT] = new XeNoiThanh();
					xeNT[countNT].nhapTT();
					ql.themXe(xeNT[countNT]);
					countNT++;
				} else {
					xeNgT[countNgT] = new XeNgoaiThanh();
					xeNgT[countNgT].nhapTT();
					ql.themXe(xeNgT[countNgT]);
					countNgT++;
				}
				break;
			case 2:
				ql.hienThi();
				break;
			case 3:
				System.out.println("nhap vao loai xe can tin tong doanh thu(0.noi thanh, 1.ngoaithanh): ");
				int loai = sc.nextInt();
				System.out.println(ql.tinhTong(loai));
				break;
			default:
				System.exit(1);
				break;
			}
		}

	}
}
