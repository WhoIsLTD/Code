package thucHanhArrayList;

import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		int n;
		ArrayList<Integer> ds = new ArrayList<Integer>();
		ds.add(6);
		ds.add(8);
		ds.add(1, 7);
		int arrInt[];
		arrInt = new int[] { 3, 1, 2, 4, 4, 5, 6, 7, 8, 9 };
		for (int i = 0; i < arrInt.length; i++) {
			if (arrInt[i] % 2 != 0)
				System.out.println(arrInt[i]);
		}
		for (int i = 0; i < arrInt.length - 1; i++) {
			for (int j = i + 1; j < arrInt.length; j++) {
				if (arrInt[i] + arrInt[j] == 10)
					System.out.println(arrInt[i] + ", " + arrInt[j]);
			}
		}
		int min = arrInt[0];
		int min2 = min;
		for (int i = 0; i < arrInt.length; i++) {
			if (arrInt[i] < min) {
				min2 = min;
				min = arrInt[i];
			}
		}
		System.out.println(min2);
		int max = 0;
		int idem = 0;
		for (int i = 0; i < arrInt.length; i++) {
			int dem = 0;
			for (int j = 0; j < arrInt.length; j++) {
				if (arrInt[i] % arrInt[j] == 0)
					dem++;
			}
			if (dem > max) {
				max = dem;
				idem = i;
			}

		}
		System.out.println(arrInt[idem]);
	}
}
