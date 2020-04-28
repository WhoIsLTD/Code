package com.ltd.DanhBa.Contact;
import java.util.Scanner;

public class Contact
{
	private String name, phone;

	public void nhapTT()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào số điện thoại: ");
		setPhone(sc.nextLine());
		System.out.println("Nhập vào họ và tên: ");
		setName(sc.nextLine());
	}

	public void inTT()
	{
		System.out.println("Tên: " + getName() + "\tSĐT: " + getPhone());
	}

	public String getName()
	{
		return name;
	}

	public void setName(String name)
	{
		this.name = name;
	}

	public String getPhone()
	{
		return phone;
	}

	public void setPhone(String phone)
	{
		this.phone = phone;
	}


}
