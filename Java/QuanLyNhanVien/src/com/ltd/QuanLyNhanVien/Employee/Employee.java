package com.ltd.QuanLyNhanVien.Employee;
import java.util.Scanner;

public class Employee {
	private String id, name;
	private int age;
	private float rate, salary;
	private boolean status;
	public Employee() {
		
	}
	public Employee(String id, String name, int age, float rate, float salary, boolean status) {
		this.id = id;
		this.name = name;
		this.age = age;
		this.rate = rate;
		this.salary = salary;
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
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public float getRate() {
		return rate;
	}
	public void setRate(float rate) {
		this.rate = rate;
	}
	public float getSalary() {
		return salary;
	}
	public void setSalary(float salary) {
		this.salary = salary;
	}
	public boolean isStatus() {
		return status;
	}
	public void setStatus(boolean status) {
		this.status = status;
	}
	public void inputData() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào id nhân viên: ");
		id = sc.nextLine();
		System.out.println("Nhập vào tên nhân viên: ");
		name = sc.nextLine();
		System.out.println("Nhập vào tuổi nhân viên: ");
		age = Integer.parseInt(sc.nextLine());
		System.out.println("Nhập vào hệ số lương nhân viên: ");
		rate = Float.parseFloat(sc.nextLine());
		System.out.println("Nhập vào trạng thái nhân viên: ");
		status = Boolean.parseBoolean(sc.nextLine());
	}
	public float tinhLuong() {
		salary = rate * 1300000;
		return salary;
	}
	public void displayData() {
		System.out.println("Mã: " + id + "\tTên: " + name + "\tTuổi: " + age + "\nHệ số lương: " + rate + "\tLương: " + salary + "\tStatus: " + status);
	}
}
