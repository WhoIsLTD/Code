package com.ltd.todolist.task;

public class Task {
	private String id, ndTask, thoiGianLam;
	private boolean xacNhanHoanThanh;

	void Nhap(String gTriID, String gTrindTask, String gTrithoiGianLam, boolean gTrixacNhanHoanThanh) {
		//nhap vao gia tri;
	}
	void inTT() {
		// in tt
	}
	void xacNhanHoanThanh(boolean gTriXacNhanThamGia) {
		//xac nhan
	}
	void taoTask(String idTask, String ndTask) {
		//tao task
	}
	public String getThoiGianLam() {
		return thoiGianLam;
	}
	public String getNdTask() {
		return ndTask;
	}
	public String getId() {
		return id;
	}
}
