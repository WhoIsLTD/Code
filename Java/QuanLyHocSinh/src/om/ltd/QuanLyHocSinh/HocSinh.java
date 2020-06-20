package om.ltd.QuanLyHocSinh;

public class HocSinh {
	private int tuoi;
	private String ten;
	public HocSinh(int tuoi, String ten) {
		this.tuoi = tuoi;
		this.ten = ten;
	}
	public int getTuoi() {
		return tuoi;
	}
	public String getTen() {
		return ten;
	}
	@Override
	public String toString() {
		return "HocSinh [tuoi=" + tuoi + ", ten=" + ten + "]";
	}
	
	
}
