package com.ltd.HoaDon.QuanLy;

import java.util.Scanner;

import com.ltd.HoaDon.KhachHang.KhachHangNN;
import com.ltd.HoaDon.KhachHang.KhachHangVN;

public class QuanLy {



		KhachHangVN[] dsKHVN = new KhachHangVN[50];
		KhachHangNN[] dsKHNN = new KhachHangNN[50];
		private int countKHVN = 0, countKHNN = 0;

		Scanner sc = new Scanner(System.in);

		public void themHD(KhachHangVN khvn) {
			dsKHVN[countKHVN] = khvn;
			countKHVN++;
		}

		public void themHD(KhachHangNN khnn) {
			dsKHNN[countKHNN] = khnn;
			countKHNN++;
		}

		public void xoaHD() {
			int i, c;
			String id;
			System.out.println("nhap vao id can xoa: ");
			id = sc.nextLine();
			boolean make = false;
			for (c = i = 0; i < countKHVN; i++)
				if (dsKHVN[i].getId() != id) {
					dsKHVN[c] = dsKHVN[i];
					c++;
				}
			for (c = i = 0; i < countKHNN; i++)
				if (dsKHNN[i].getId() != id) {
					dsKHNN[c] = dsKHNN[i];
					c++;
				}
		}

		public void tinhTong() {
			int i, s = 0, s1 = 0;
			String id;
			for (i = 0; i < countKHVN; i++)
				s += dsKHVN[i].getSoLuong();
			for (i = 0; i < countKHNN; i++)
				s1 += dsKHNN[i].getSoLuong();
			System.out.println("tong so luong tieu thu cua khvn la: " + s);
			System.out.println("tong so luong tieu thu cua khnn la: " + s1);
		}

		public void tbTien() {
			int i, s = 0;
			for (i = 0; i < countKHNN; i++)
				s += dsKHNN[i].tien();
			System.out.println("Trung binh thanh tien cua khnn la: " + (s/countKHNN));
		}
		public void in2013() {
			int i, s = 0;
			for (i = 0; i < countKHNN; i++) {
				if (dsKHNN[i].getNam() == 2013)
					dsKHNN[i].inHD();
			}
			for (i = 0; i < countKHVN; i++) {
				if (dsKHVN[i].getNam() == 2013)
					dsKHVN[i].inHD();
			}
		}
		public void inAll() {
			int i, s = 0;
			for (i = 0; i < countKHNN; i++) {
				dsKHNN[i].inHD();
			}
			for (i = 0; i < countKHVN; i++) {
				dsKHVN[i].inHD();
			}
		}
}
