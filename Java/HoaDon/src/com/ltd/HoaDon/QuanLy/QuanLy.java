package com.ltd.HoaDon.QuanLy;

import java.util.Scanner;

import com.ltd.HoaDon.KhachHang.KhachHangNN;
import com.ltd.HoaDon.KhachHang.KhachHangVN;

public class QuanLy {

		protected KhachHangVN[] dsKHVN = new KhachHangVN[50];
		protected KhachHangNN[] dsKHNN = new KhachHangNN[50];
		protected int countKHVN = 0, countKHNN = 0;
	
		Scanner sc = new Scanner(System.in);

		public void themHD(KhachHangVN vn) {
			dsKHVN[countKHVN] = vn;
			countKHVN++;
			System.out.println(countKHVN);
		}

		public void themHD(KhachHangNN nn) {
			dsKHNN[countKHNN] =nn;
			countKHNN++;
		}

		public void xoaHD() {
			int i, c;
			String id;
			System.out.println("nhap vao id can xoa: ");
			id = sc.nextLine();
			for (c = i = 0; i < countKHVN; i++)
				if (dsKHVN[i].getId() != id) {
					dsKHVN[c] = dsKHVN[i];
					c++;
				}
			countKHVN = c;
			for (c = i = 0; i < countKHNN; i++)
				if (dsKHNN[i].getId() != id) {
					dsKHNN[c] = dsKHNN[i];
					c++;
				}
			countKHNN = c;
		}

		public void tinhTong() {
			int i, s = 0, s1 = 0;
			for (i = 0; i < countKHVN; i++)
				s += dsKHVN[i].getSoLuong();
			for (i = 0; i < countKHNN; i++)
				s1 += dsKHNN[i].getSoLuong();
			System.out.println("tong so luong tieu thu cua khvn la: " + s);
			System.out.println("tong so luong tieu thu cua khnn la: " + s1);
		}

		public void tbTien() {
			int i, s = 0;
			double tb;
			for (i = 0; i < countKHNN; i++)
				s += dsKHNN[i].tien();
				tb = s/countKHNN;
			System.out.println("Trung binh thanh tien cua khnn la: " + tb);
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
