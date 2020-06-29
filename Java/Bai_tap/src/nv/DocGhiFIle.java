package nv;
import java.io.FileWriter;
import java.io.IOException;
import java.io.File;
import java.util.Scanner;

import nv.nv.NhanVien;

public class DocGhiFIle {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		System.out.print(" Nhập số lượng nhân viên n = ");
		int n = sc.nextInt();
		System.out.print("\n Nhập thông tin từng nhân viên:");
		int i;
		NhanVien[] nv = new NhanVien[n];
		for (i=0; i<n; i++)
		{
			nv[i] = new NhanVien();
			nv[i].setHoTen(sc.nextLine());
			nv[i].setMaNV(sc.nextInt());
			nv[i].setTuoi(sc.nextInt());
		}
		
		File file = new File("ds.txt");

		if (!file.exists()) {
			file.createNewFile();
		}
		FileWriter fw = new FileWriter(file);
		for ( i = 0; i < n; i++) {
			fw.write(nv[i].toString());
			fw.write("\n");
		}
		fw.close();
		
		File file2 = new File("max.txt");

		if (!file.exists()) {
			file.createNewFile();
		}
		FileWriter fw2 = new FileWriter(file2);
		int max = nv[0].getTuoi();
		for ( i = 0; i < n; i++) {
			if (max < nv[i].getTuoi()) {
				max = nv[i].getTuoi();
			}
		}
		for ( i = 0; i < n; i++) {
			if (nv[i].getTuoi() == max) {
				fw2.write(nv[i].getHoTen());
				fw2.write("\n");
			}
		}
		fw2.close();
	}
}