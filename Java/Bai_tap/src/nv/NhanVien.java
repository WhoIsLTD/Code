package nv;
import java.util.Scanner;

public class NhanVien {
    protected int maNV, tuoi;
    protected String hoTen;
	public NhanVien(maNV = 0; ) {
		
	}
	public NhanVien(int maNV, int tuoi, String hoTen) {
		this.maNV = maNV;
		this.tuoi = tuoi;
		this.hoTen = hoTen;
	}

	public String toString() {
        return maNV + " " + tuoi + " " + hoTen;
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

