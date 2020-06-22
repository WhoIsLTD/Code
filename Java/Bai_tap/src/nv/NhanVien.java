package nv;
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


	@Override
	public String toString() {
		return "NhanVien [maNV=" + maNV + ", tuoi=" + tuoi + ", hoTen=" + hoTen + "]";
	}
	public void setMaNV(int maNV) {
		this.maNV = maNV;
	}
	public void setTuoi(int tuoi) {
		this.tuoi = tuoi;
	}
	public void setHoTen(String hoTen) {
		this.hoTen = hoTen;
	}
    
}

