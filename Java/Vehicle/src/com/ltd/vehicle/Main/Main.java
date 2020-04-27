package com.ltd.vehicle.Main;

import java.util.Scanner;

import com.ltd.vehicle.Vehicle.VehicleManager;

public class Main {
	static void menu() {
		System.out.println("1. Them moi dang ky xe\n" + "2. Xoa 1 thong tin dang ky xe\n"
				+ "3. Cap nhat thong tin 1 dang ky xe xe\n" + "4. In ra danh cac dang ky xe\n"
				+ "5. Thoat khoi chuong trinh.");
	}

	public static void main(String[] args) {
		int choice;
		VehicleManager myManager = new VehicleManager();
		Scanner sc = new Scanner(System.in);
		menu();
		while (true) {
			System.out.println("Chon menu: ");
			choice = sc.nextInt();
			switch (choice) {
			case 1:
				myManager.addVehicle();
				break;
			case 2:
				myManager.removeVehicle();
				break;
			case 3:
				myManager.updateVehicle();
				break;
			case 4:
				myManager.displayVehicle();
				break;
			case 5:
				System.out.println("Da thoat khoi chuong trinh!!");
				System.exit(choice);
			}
		}
	}
}
