
import java.util.Scanner;

public class SinhVien {
	private String maSV, hoTen;
	private double diem;

	public void Sinhvien() {
	}

	public String getHoTen() {
		return hoTen;
	}

	public void setHoTen(String hoTen) {
		this.hoTen = hoTen;
	}

	public double getDiem() {
		return diem;
	}

	public void setDiem(double diem) {
		this.diem = diem;
	}

	public String getMaSV() {
		return maSV;
	}

	public void setMaSV(String maSV) {
		this.maSV = maSV;
	}

	public String toString() {
		return "Ten: " + this.hoTen + "\nMaSV: " + this.maSV + "\nDiem: " + this.diem;
	}

	private static Scanner sc;

	public static void main(String[] args) {

		int n, imax = 0;
		double d, max = 0;
		String m;

		sc = new Scanner(System.in);

		System.out.println("nhap so sinh vien: ");
		n = Integer.parseInt(sc.nextLine());
		SinhVien[] a = new SinhVien[n];
		for (int i = 0; i < n; i++) {
			a[i] = new SinhVien();
			System.out.println("nhap ho ten: ");
			String t = sc.nextLine();
			a[i].setHoTen(t);
			System.out.println("nhap vao ma sinh vien: ");
			m = sc.nextLine();
			a[i].setMaSV(m);
			System.out.println("nhap vao diem: ");
			d = Double.parseDouble(sc.nextLine());
			a[i].setDiem(d);
		}
		for (int i = 0; i < n; i++) {
			if (max < a[i].getDiem()) {
				max = a[i].getDiem();
				imax = i;
			}
		}
		System.out.println("sinh vien cao diem nhat la:\n" + a[imax]);

	}
}