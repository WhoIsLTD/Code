package com.ltd.Number1.Sumber;

public class SumNumber {
	int n, dVi;

	public SumNumber(int n) {
		this.n = n;
	}

	public void calcSumChar() {
		int s = 0;
		while (n > 0) {
			dVi = n % 10;
			s += dVi;
			n /= 10;
		}
		System.out.println(s);
	}

	public void findPerfectNumber() {

		for (int i = 1; i < n; i++) {
			int s = 0;
			for (int j = 1; j < i; j++) {
				if (i % j == 0)
					s += j;
			}
			if (s == i)
				System.out.println(i);
		}
	}

	public void findGCDivisor() {
		for(int i = 1; i < n; i++)
			System.out.println(i);
	}

	public void separateFactor() {
		for (int i = 2; i <= n; i++) {
			int dem = 0;
			if (n % i == 0) {
				n /= i;
				++dem;
			}

			if (dem == 1) {
				System.out.print(i);
				if (n == 1)
					break;
				System.out.print("*");
			}
		}
	}
}
