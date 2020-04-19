package com.ltd.QuanLySinhVien.Run;

import java.util.Scanner;

import com.ltd.QuanLySinhVien.Student.Student;

public class ManagementStudent {
	public static void main(String[] args) {
		Student Student1 = new Student();
		Student Student2 = new Student("1000", "Lê Tiến Đạt", "0987654321", "Vĩnh Phúc", 19, true);
		Student Student3 = new Student();
		Scanner sc = new Scanner(System.in);
		System.out.println("Thông tin sinh viên 2: ");
		Student2.displayData();
//		System.out.println("Thông tin sinh viên 3: ");
//		Student3.inputData();
//		Student3.displayData();
		
		
	}
}
