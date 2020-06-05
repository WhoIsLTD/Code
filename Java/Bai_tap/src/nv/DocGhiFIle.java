package nv;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class DocGhiFIle {
	
	public static void main(String[] args) throws IOException {
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("nhap so luong nv: ");
		n = sc.nextInt();
		NhanVien[] nv = new NhanVien[n];
		File file = new File("ds.txt");
        
        if(!file.exists()) {
        	file.createNewFile();
        }
	}
}
