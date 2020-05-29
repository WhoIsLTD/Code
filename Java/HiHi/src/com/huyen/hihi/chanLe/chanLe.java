package com.huyen.hihi.chanLe;

public class chanLe {

	void xetChan(int n) {
		if (n % 2 == 0)
			System.out.println(n);
	}

	void xetLe(int n) {
		if (n % 2 != 0)
			System.out.println(n);
	}

	void ngTo(int n) {
		int i, nt = 0;
		if (n > 1) {
			for (i = 2; i <= Math.sqrt(n); i++) {
				if (n % i == 0) {
					nt = 1;
					break;
				}
			}
			if (nt == 0)
				System.out.println(n);
		}
	}
	void hoanHao(int n) {
		int i, j, s=0;
		for(i=1; i<n; i++) {
			if(n%i==0)
				s += i;
		}
		if(n==s) 
			System.out.println(n);
	}
}
