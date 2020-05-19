package com.ltd.file.file;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;
import com.ltd.file.matran.Matran;

public class file {

	public static boolean snt(int a) {
		if (a < 2) {
			return false;
		}
		for (int i = 2; i <= Math.sqrt(a); i++) {
			if (a % i == 0) {
				return false;
			}
		}
		return true;
	}

	public static void main(String[] args) throws IOException {
		File file = new File("Matran.txt");
		if (!file.exists()) {
			file.createNewFile();
		}
		FileInputStream fis = new FileInputStream(file);
//		BufferedReader reader = new BufferedReader(new FileReader(file));
//		String line = reader.readLine();
//		System.out.println(line);
//		String[] w = line.split(" ");
//		int m = line.charAt(0);
//		int n = line.charAt(2);
//		int x = Character.getNumericValue((char) m);
//		int y = Character.getNumericValue((char) n);
//
//		System.out.println(" " + x + " " + y);
//
//		int[][] Arr = new int[x][y];
		fis.skip(4);
		int c = fis.read();
		while (c != -1) {

			int a = Character.getNumericValue((char) c);
			if (snt(a) == true)
				System.out.println((char) c);
			c = fis.read();
		}
		fis.close();
	}

}
