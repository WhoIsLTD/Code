package com.ltd.DanhBa.Contact;

public abstract class ContactsManager
{
	// Fields:
	protected Contact[] myFriends;
	protected int friendsCount;

	// Default Constructor:
	public ContactsManager()
	{
		myFriends = new Contact[500];
		friendsCount = 0;
	}
	// Methods:
	// thêm 1 liên hệ
	abstract public void addContact(Contact contact);

	// xóa liên hệ
	abstract public void removeContact();

	// cập nhật liên hệ
	abstract public void updateContact();

	// hiển thị liên hệ
	abstract public void displayContact();

	//tìm kiếm liên hệ
	abstract public Contact searchContact();

}