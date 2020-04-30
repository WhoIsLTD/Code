package com.ltd.thhvhcn.Main;


import java.util.Scanner;

import com.ltd.thhvhcn.Dinh.Dinh;
import com.ltd.thhvhcn.TuGiac.HinhChuNhat;
import com.ltd.thhvhcn.TuGiac.TuGiac;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
<<<<<<< HEAD
		HinhChuNhat hcn = new HinhChuNhat();
		hcn.nhapGT(Dinh (1, 2), Dinh (2, 3), Dinh (3, 4), Dinh (5, 6));
=======
		TuGiac hcn = new HinhChuNhat();
		Dinh d = new Dinh();
		hcn.nhapGT();
>>>>>>> 26f4aada19bbbbb0771d6c5e802f1d394b988727
		hcn.tinhCV();
		hcn.inTT();
		
	}

}