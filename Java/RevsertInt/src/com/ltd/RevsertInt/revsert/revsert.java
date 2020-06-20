package com.ltd.RevsertInt.revsert;

public class revsert {
	private int soNguyen;

	public revsert(int soNguyen) {
		this.soNguyen = soNguyen;
	}

	public void chuyen() {
		String text = "";
		while (soNguyen > 0) {
			int i = soNguyen%2;
			soNguyen = soNguyen / 2;
			text += i;
		}
		//dao ngc chuoi.
		String text1 = "";
		for (int i = 0; i < text.length(); i++) {
			text1 = text.charAt(i) + text1;
		}
		
		int s= 0;
		for (int i = 0; i < text1.length(); i++) {
			s += (text1.charAt(i)-48)*Math.pow(2, i);

		}
		System.out.println(s);
	}
}
