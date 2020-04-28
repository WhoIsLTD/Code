package com.ltd.QuanLySinhVien.Student;
import java.util.Scanner;

public class Student {
	private String id, name, phone, address;
	private int age;
	private boolean status;

	public Student() {

	}

	public Student(String id, String name, String phone, String address, int age, boolean status) {
		this.id = id;
		this.name = name;
		this.phone = phone;
		this.address = address;
		this.age = age;
		this.status = status;

	}

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getPhone() {
		return phone;
	}

	public void setPhone(String phone) {
		this.phone = phone;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public boolean isStatus() {
		return status;
	}

	public void setStatus(boolean status) {
		this.status = status;
	}

	public void inputData() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào id sinh viên: ");
		id = sc.nextLine();
		System.out.println("Nhập vào họ và tên sinh viên: ");
		name = sc.nextLine();
		System.out.println("Nhập vào tuổi sinh viên: ");
		age = Integer.parseInt(sc.nextLine());
		System.out.println("Nhập vào địa chỉ sinh viên: ");
		address = sc.nextLine();
		System.out.println("Nhập vào số điện thoại sinh viên: ");
		phone = sc.nextLine();
		System.out.println("Nhập vào trạng thái sinh viên: ");
		status = Boolean.parseBoolean(sc.nextLine());

	}

	public void displayData() {
		System.out.println("Mã: " + id + "\tTên: " + name + "\tTuổi: " + age + "\tSố điện thoại: " + phone + "\tĐịa chỉ: "
				+ address + "\tTrạng thái" + status);
	}
	
}