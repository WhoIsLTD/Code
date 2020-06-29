package nv.nv;

import java.util.Scanner;

public class NhanVien {
	protected int maNV, tuoi;
	protected String hoTen;

	public NhanVien() {

	}

	public NhanVien(int maNV, int tuoi, String hoTen) {
		this.maNV = maNV;
		this.tuoi = tuoi;
		this.hoTen = hoTen;
	}

	public void nhapTT() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào tên nhân viên: ");
		setHoTen(sc.nextLine());
		System.out.println("Nhập vào id nhân viên: ");
		setMaNV(sc.nextInt());

		System.out.println("Nhập vào tuổi nhân viên: ");
		setTuoi(sc.nextInt());
	}

	@Override
	public String toString() {
		return "NhanVien [maNV=" + maNV + ", tuoi=" + tuoi + ", hoTen=" + hoTen + "]";
	}

	public int getTuoi() {
		return tuoi;
	}

	public void setMaNV(int maNV) {
		this.maNV = maNV;
	}

	public void setTuoi(int tuoi) {
		this.tuoi = tuoi;
	}

	public String getHoTen() {
		return hoTen;
	}

	public void setHoTen(String hoTen) {
		this.hoTen = hoTen;
	}

}
