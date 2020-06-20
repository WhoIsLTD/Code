package com.ltd.UCLNBCNN.UocBoi;

public class UocBoi {
	int a, b;

	public UocBoi(int a, int b) {
		this.a = a;
		this.b = b;
	}

	public int ucln() {
		int x = a;
		int y = b;
		while(x != y) {
			if(x > y)
				x-=y;
			else
				y-=x;
		}
		return x;
	}
	public void bcnn() {
		int x = Math.abs(a);
		int y = Math.abs(b);
		System.out.println((x*y)/ucln());
		
	}
}
