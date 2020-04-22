package com.ltd.DanhBa.Main;

import java.util.Scanner;

import com.ltd.DanhBa.Contact.Contact;
import com.ltd.DanhBa.Contact.ContactsManager;

public class Main
{
	static void menu()
	{
		System.out.println(
				"1. Nhập mới 1 contact\n" + "2. Cập nhật số điện thoại của contact nếu tên đã có trong danh bạ\n"
						+ "3. Xóa 1 contact khỏi danh bạ\n" + "4. Tìm kiếm và in số điên thoại theo tên\n"
						+ "5. Hiển thị danh sách liên hệ trong danh bạ\n" + "6. Thoát!!!");
	}

	public static void main(String[] args)
	{
		int i = 0, chon, n;
		boolean cont = true;
		Scanner sc = new Scanner(System.in);

		Contact[] contact = new Contact[50];
		ContactsManager myContactsManager = new Contact();
		menu();
		while (cont)
		{
			System.out.println("Chọn menu: ");
			chon = sc.nextInt();
			switch (chon)
			{
			case 1:
				contact[i] = new Contact();
				contact[i].nhapTT();
				myContactsManager.addContact(contact[i]);
				i++;
				break;
			case 2:
				myContactsManager.updateContact();
				break;
			case 3:
				myContactsManager.removeContact();
				break;
			case 4:
				Contact result = myContactsManager.searchContact();
				System.out.println("Số điện thoại: " + result.getPhone());
				break;
			case 5:
				myContactsManager.displayContact();
				break;
			case 6:
				cont = false;
				System.out.println("Thoát!!!");
				break;
			}
		}
	}
}
