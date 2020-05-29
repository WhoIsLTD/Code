package com.huyen.hihi.chanLe;
import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		chanLe cl = new chanLe();
		
		Scanner sc = new Scanner(System.in);
		// TODO Auto-generated method stub
		int i=0, n, a[]= new int[100];
		do {
			System.out.println("nhap so phan tu: ");
			n = sc.nextInt();
		} while(n<0 || n>100);
		for(i=0; i<n; i++) {
			System.out.print("nhap so thu "+(i+1) +" la: ");
			a[i] = sc.nextInt();
		}
		System.out.println("so chan :");
		for (i=0; i<n; i++) {
			cl.xetChan(a[i]);
		}
		System.out.println("\nso le la:");
		for(i=0; i<n; i++) {
			cl.xetLe(a[i]);
		}
		System.out.println("\nso nt la:");

		int nt, j, s;
		for(i=0;i<n; i++) {
			cl.ngTo(a[i]);
		}
		System.out.println("\n so hoan hao: ");
		for(i=0; i<n; i++) {
			 cl.hoanHao(a[i]);
		}
	}

}