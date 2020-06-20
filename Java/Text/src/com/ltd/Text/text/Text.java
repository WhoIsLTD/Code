package com.ltd.Text.text;

public class Text {
	String text;

	public Text(String text) {
		this.text = text;
	}

	public void findMinChar() {
		int min = 0;
		for (int i = 0; i < text.length(); i++)
			if (text.charAt(i) > 64 && text.charAt(i) < 91 || text.charAt(i) > 97 && text.charAt(i) < 123) {
				min = text.charAt(i);
				break;
			}

		for (int i = 0; i < text.length(); i++) {
			if (text.charAt(i) > 64 && text.charAt(i) < 91 || text.charAt(i) > 97 && text.charAt(i) < 123)
				if (text.charAt(i) < min)
					min = text.charAt(i);
		}
		System.out.println(min);
	}

	public void upperCaseChar() {
		System.out.println(text.toUpperCase());
	}

	public void reverse() {
		for (int i = text.length() - 1; i >= 0; i--)
			System.out.print(text.charAt(i));
	}

	public void upperCaseFirstChars() {
		char n;
		int i = 0;

		String result = "";
		if (text.charAt(0) > 97 && text.charAt(0) < 123) {
			n = (char) text.charAt(0);
			result += Character.toUpperCase(n);
			i++;
		}

		while (i < text.length()) {
			result += text.charAt(i);
			if (text.charAt(i) == ' ')
				if (i + 1 < text.length() && text.charAt(i + 1) > 97 && text.charAt(i + 1) < 123) {
					n = (char) text.charAt(i + 1);
					result += Character.toUpperCase(n);
					i += 1;
				}
			i++;
		}
		System.out.println(result);
	}

	public void reverseCase() {
		char n;
		String result = "";
		for (int i = 0; i < text.length(); i++) {
			if (text.charAt(i) > 97 && text.charAt(i) < 123) {
				n = (char) text.charAt(i);
				result += Character.toUpperCase(n);
			} else if (text.charAt(i) > 64 && text.charAt(i) < 91) {
				n = (char) text.charAt(i);
				result += Character.toLowerCase(n);
			} else {
				n = (char) text.charAt(i);
				result += Character.toLowerCase(n);
			}
		}
		System.out.println(result);
	}

}
