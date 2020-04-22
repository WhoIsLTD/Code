package com.ltd.DanhBa.Contact;
import java.util.Scanner;

public class Contact extends ContactsManager
{
	private String name, phone;

	public void nhapTT()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào họ và tên: ");
		name = sc.nextLine();
		System.out.println("Nhập vào số điện thoại: ");
		setPhone(sc.nextLine());
	}

	public void inTT()
	{
		System.out.println("Tên: " + name + "\tSĐT: " + getPhone());
	}

	@Override
	public void addContact(Contact contact)
	{
		myFriends[friendsCount] = contact;
		friendsCount++;
	}

	@Override
	public void removeContact()
	{
		int c, i;
		boolean make = false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào liên hệ muốn xóa:");
		String ten = sc.nextLine();
		for (c = i = 0; i < friendsCount; i++)
		{
			if (myFriends[i].name != ten)
			{
				myFriends[c] = myFriends[i];
				c++;
			}
			else
				make = true;
		}
		friendsCount = c;
		if(make)
			System.out.println("Xóa thành công!");
		else
			System.out.println("Không tìm thấy liên hệ");
		

	}


	@Override
	public void updateContact()
	{
		boolean make = false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào tên liên hệ cần cập nhật số điện thoại:");
		String ten = sc.nextLine();
		System.out.println("Nhập vào số điện thoại mới:");
		String sdt = sc.nextLine();
		for (int i = 0; i < friendsCount; i++)
			if (myFriends[i].name == ten)
			{
				myFriends[i].setPhone(sdt);
				make = true;
			}
		if(make)
			System.out.println("Update thành công!");
		else
			System.out.println("Không tìm thấy liên hệ");
	}

	@Override
	public void displayContact()
	{
		for (int i = 0; i < friendsCount; i++)
			myFriends[i].inTT();
	}

	@Override
	public Contact searchContact()
	{
		boolean make = false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào tên liên hệ cần tìm kiếm: ");
		String ten = sc.nextLine();
		for (int i = 0; i < friendsCount; i++)
		{
			if (myFriends[i].name == ten)
			{
				make = true;
				return myFriends[i];
			}
		}
		if(!make)
			System.out.println("Không tìm thấy liên hệ có tên '" + ten + "'");
		return null;
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
