package com.ltd.QuanLyNhanVien.Test;

import java.util.Scanner;

import com.ltd.QuanLyNhanVien.Employee.Employee;

public class Test
{
	public static void main(String[] args)
	{
		int i, n;
		boolean t = true;
		String s;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhập vào số lượng nhân viên: ");
		n = sc.nextInt();
		Employee[] e = new Employee[n];

		while (t)
		{
			System.out.println("Mời chọn menu: ");
			int m = sc.nextInt();
			switch (m)
			{
			case 1:
				for (i = 0; i < n; i++)
				{
					e[i] = new Employee();
					System.out.println("Nhân viên thứ " + i + 1 + ": ");
					e[i].inputData();
				}
				break;

			case 2:
				for (i = 0; i < n; i++)
				{
					e[i].tinhLuong();
				}
				break;
			case 3:
				for (i = 0; i < n; i++)
				{
					System.out.println("Nhân viên thứ " + i + ": ");
					e[i].displayData();
				}
				break;
			case 4:
				for (i = 0; i < n - 1; i++)
					for (int j = i + 1; j < n; j++)
						if (e[i].tinhLuong() > e[j].tinhLuong())
						{
							Employee temp = e[i];
							e[i] = e[j];
							e[j] = temp;
						}
				break;
			case 5:
				System.out.println("Nhập vào tên nhân viên: ");
				s = sc.nextLine();
				for(i = 0; i < n; i++)
					if (s == e[i].getName())
						e[i].displayData();
				break;
			case 6:
				System.out.println("Thoát!!!");
				t = false;
				break;
			}
		}
	}
}
