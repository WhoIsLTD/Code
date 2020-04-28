package com.ltd.DanhBa.Contact;

import java.util.Scanner;

public class ContactsManager
{
	// Fields:
	private Contact[] myFriends;
	private int friendsCount;

	// Default Constructor:
	public ContactsManager()
	{
		myFriends = new Contact[500];
		friendsCount = 0;
	}

	// Methods:
	// thêm liên hệ
	public void addContact(Contact contact)
	{
		myFriends[friendsCount] = contact;
		friendsCount++;
	}
	// xóa liên hệ
	public void removeContact()
	{
		int c, i;
		boolean make = false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào liên hệ muốn xóa:");
		String ten = sc.nextLine();
		for (c = i = 0; i < friendsCount; i++)
		{
			if (!myFriends[i].getName().equals(ten))
			{
				myFriends[c] = myFriends[i];
				c++;
				make = true;
			}
		}
		friendsCount = c;
		if(make)
			System.out.println("Xóa thành công!");
		else
			System.out.println("Không tìm thấy liên hệ");
		

	}
	// cập nhật liên hệ
	public void updateContact()
	{
		boolean make = false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào tên liên hệ cần cập nhật số điện thoại:");
		String ten = sc.nextLine();
		System.out.println("Nhập vào số điện thoại mới:");
		String sdt = sc.nextLine();
		for (int i = 0; i < friendsCount; i++)
			if (myFriends[i].getName().equals(ten))
			{
				myFriends[i].setPhone(sdt);
				make = true;
			}
		if(make)
			System.out.println("Update thành công!");
		else
			System.out.println("Không tìm thấy liên hệ");
	}
	// hiển thị liên hệ
	public void displayContact()
	{
		for (int i = 0; i < friendsCount; i++)
		{
			myFriends[i].inTT();
		}
	}
	//tìm kiếm liên hệ
	public Contact searchContact()
	{
		boolean make = false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào tên liên hệ cần tìm kiếm: ");
		String ten = sc.nextLine();
		for (int i = 0; i < friendsCount; i++)
		{
			if (myFriends[i].getName().equals(ten))
			{
				make = true;
				return myFriends[i];
			}
		}
		if(!make)
			System.out.println("Không tìm thấy liên hệ có tên '" + ten + "'");
		return null;
	}
}