package com.ltd.NgayThang.Ngay;

public class Ngay {
	private int nam, thang;
	
	private String cauTraLoi;

	public Ngay(int nam, int thang) {
		this.nam = nam;
		this.thang = thang;
	}

	public boolean namNhuan() {
		return nam % 4 == 0 && (nam % 400 == 0 || nam % 100 != 0);
	}

	public void soNgay() {
		if (thang < 1 || thang > 12 || nam < 1)
			cauTraLoi = "thang 0 hop le";
		else {
			switch (thang) {
			case 1:
			case 3:
			case 7:
			case 8:
			case 10:
			case 12:
				cauTraLoi = "31";
				break;
			case 2:
				if (namNhuan())
					cauTraLoi = "29";
				else
					cauTraLoi = "28";
				break;
			case 4:
			case 5:
			case 6:
			case 9:
			case 11:
				cauTraLoi = "30";
				break;
			}
		}
	}
	public void inTT() {
		System.out.println(cauTraLoi);
	}

}
