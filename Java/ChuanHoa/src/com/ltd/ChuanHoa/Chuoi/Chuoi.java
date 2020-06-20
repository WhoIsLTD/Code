package com.ltd.ChuanHoa.Chuoi;

public class Chuoi {
	private String text;

	public Chuoi(String text) {
		this.text = text;
	}

	public void chuanHoa() {
		String result = "";
		int dem = 0;
		for (int i = 0; i < text.length(); i++) {
			if (text.charAt(i) == '(') {
				dem++;
				result += text.charAt(i);
			} else if (dem > 0) {
				dem--;
				result += text.charAt(i);
			}

		}
		text = result;
		result = "";
		dem = 0;
		for (int i = text.length()-1; i >=0; i--) {
			if (text.charAt(i) == ')') {
				dem++;
				result = text.charAt(i) + result;
			} else if (dem > 0) {
				dem--;
				result = text.charAt(i) + result;
			}

		}
		System.out.println(result);
	}

}
