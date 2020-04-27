package com.ltd.vehicle.Vehicle;

import java.util.ArrayList;
import java.util.Scanner;

public class VehicleManager {
	protected ArrayList<Vehicle> VehicleList = new ArrayList<>();

	public void addVehicle() {
		Vehicle vehicle = new Vehicle();
		vehicle.nhapTT();
		VehicleList.add(vehicle);
	}

	public void removeVehicle() {
		boolean check = false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhap vao id xe can xoa: ");
		String ma = sc.nextLine();

		for (int i = 0; i < VehicleList.size(); i++) {
			Vehicle c = VehicleList.get(i);
			if (c.getId().equals(ma)) {
				VehicleList.remove(c);
				check = true;
			}
		}
		if (check)
			System.out.println("Xoa thanh cong");
		else
			System.out.println("Khong tim thay id");
	}

	public void updateVehicle() {
		boolean check = false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Nhap vao id xe can cap nhat thong tin: ");
		String ma = sc.nextLine();
		System.out.println("Nhap vao gia tri xe moi: ");
		int gTri = sc.nextInt();
		System.out.println("Nhap vao dung tich xe moi: ");
		int dungTich = sc.nextInt();
		for (Vehicle i : VehicleList) {
			if (i.getId().equals(ma)) {
				i.setgTri(gTri);
				i.setDungTich(dungTich);
				check = true;
			}
		}
		if (check)
			System.out.println("Update thanh cong");
		else
			System.out.println("Khong tim thay id");
	}

	public void displayVehicle() {
		for (Vehicle i : VehicleList) {
			i.inTT();
		}

	}
}
