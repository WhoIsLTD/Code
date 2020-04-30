package com.ltd.thhvhcn.Main;


import java.util.Scanner;

import com.ltd.thhvhcn.TuGiac.HinhChuNhat;
import com.ltd.thhvhcn.TuGiac.TuGiac;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HinhChuNhat hcn = new HinhChuNhat();
		hcn.nhapGT(Dinh (1, 2), Dinh (2, 3), Dinh (3, 4), Dinh (5, 6));
		hcn.tinhCV();
		hcn.inTT();
		
	}

}