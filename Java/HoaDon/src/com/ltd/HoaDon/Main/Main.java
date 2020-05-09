package com.ltd.HoaDon.Main;

import java.util.Scanner;

import com.ltd.HoaDon.KhachHang.KhachHang;
import com.ltd.HoaDon.KhachHang.KhachHangNN;
import com.ltd.HoaDon.KhachHang.KhachHangVN;
import com.ltd.HoaDon.QuanLy.QuanLy;

public class Main {

	static void menu() {
		System.out.println("1. Nhap 1 hoa don\n" + "2. Xoa 1 hoa don\n"
				+ "3. Tinh tong so luong cho tung loai khach hang\n" + "4. Tinh trung binh thanh tien cua khnn\n"
				+ "5. in cac hoa don nam 2013\n" + "6. in tat ca cac hoa don\n" + "7. Thoat");
	}

	public static void main(String[] args) {
		menu();
		int chon, countVN = 0, countNN = 0;
		Scanner sc = new Scanner(System.in);
		while (true) {
			KhachHangVN[] vn = new KhachHangVN[50];
			KhachHangNN[] nn = new KhachHangNN[50];
			QuanLy qly = new QuanLy();
			System.out.println("Chon menu: ");
			chon = sc.nextInt();
			switch (chon) {
			case 1:
				int loai;
				System.out.println("Nhap vao loai khach hang (1.KHVN, 2.KHNN");
				loai = sc.nextInt();
				if (loai == 1) {
					vn[countVN] = new KhachHangVN();
					vn[countVN].nhapHD();
					qly.themHD(vn[countVN]);
					countVN++;
				} else {
					nn[countNN] = new KhachHangNN();
					nn[countNN].nhapHD();
					qly.themHD(nn[countNN]);
					countNN++;
				}
				break;
			case 2:
				qly.xoaHD();
				break;
			case 3:
				qly.tinhTong();
				break;
			case 4:
				qly.tbTien();
				break;
			case 5:
				qly.in2013();
				break;
			case 6:
				qly.inAll();
				break;
			case 7:
				System.exit(0);
				break;
			}
		}
	}
}
