package com.ltd.thhvhcn.Main;


import java.util.Scanner;

import com.ltd.thhvhcn.Dinh.Dinh;
import com.ltd.thhvhcn.TuGiac.HinhChuNhat;
import com.ltd.thhvhcn.TuGiac.TuGiac;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		TuGiac hcn = new HinhChuNhat();
		Dinh d = new Dinh();
		hcn.nhapGT();
		hcn.tinhCV();
		hcn.inTT();
		
	}

}