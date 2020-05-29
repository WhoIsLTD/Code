package com.ltd.SoNguyenTo.KTraSoNT;

public class initUnit {
	private int n;

	public initUnit(int n) {
		this.n = n;
	}

	public void checkPrime() {
		boolean flag = true;
		int sqrt = (int) Math.sqrt(n);
		if (n < 2)
			flag = false;
		else {
			for (int soChia = 2; soChia <= sqrt; soChia++) {
				if (n % soChia == 0) {
					flag = false;
					break;
				}
			}
		}
		String rs = flag ? n + "is prime" : n + "isnt prime";
		System.out.println(rs);
	}

	public void calcSumOfChar() {
		int Sum = 0, temp = n;
		while (temp > 0) {
			Sum += temp % 10;
			temp /= 10;
		}
		System.out.println("Sum = " + Sum);

	}

}
