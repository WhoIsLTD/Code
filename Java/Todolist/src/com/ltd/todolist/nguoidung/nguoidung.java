package com.ltd.todolist.nguoidung;

import com.ltd.todolist.task.Task;

public class nguoidung {
	Task[] dsTask;

	public void taoTask(String id, String ndTask) {
		// tao task
		// Task -> nhap(gTriId, gTrindTask)
		// them task vào dsTask
	}

	public void suaTask(String id, String ndTask) {
		// tim trong task neu Task->getId() = gTriId
		// Task -> suaTask(gTriId, gTrindTask)
	}

	public void xoaTask(String id, String ndTask) {
		// tim trong task neu Task->getId() = gTriId
		// Task -> xoaTask(gTriId, gTrindTask)
	}

	public Task[] timKiemTask(int loaiTimKiem, String id) {
		Task[] dsKQ = null;
		// tim kiem task trong dstask
		// if loaiTimKiem =1//neu task co task -> getthoiGianLam() = gTrithoiGianLam
		// if loaiTimKiem =0//neu task co task -> getndTask() = gTrindTask
		// thi them vao dsKQ
		return dsKQ;
	}
}
