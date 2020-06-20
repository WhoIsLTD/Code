package com.ltd.MonPhai.Main;

import com.ltd.MonPhai.Phai.MonPhai;
import com.ltd.MonPhai.Phai.ThieuLam;
import com.ltd.MonPhai.Phai.VoDang;
import com.ltd.MonPhai.Skill.NgoaiCong;
import com.ltd.MonPhai.Skill.NoiCong;

public class Main {
	public static void main(String[] args) {
		NoiCong kn1 = new NoiCong("La Hán Quyền", "Kim", "Võ công nhập môn", 1000);
		NgoaiCong kn2 = new NgoaiCong("Thái cực quyền", "Mộc", "Võ công thượng thừa", 500);
		MonPhai mp1 = new ThieuLam("Thiếu lâm quyền", "Đạt ma sư tổ", "Chùa", "Tứ đại gia không", "Ăn chay niệm phật", kn1);
		MonPhai mp2 = new VoDang("Võ Đang Kiếm", "Trương Tam Phong", "Núi", "Hành hiệp trượng nghĩa","Là môn phái lớn, lâu đời", kn2);
		mp1.inTT();
		mp1.luyenCong("Bao tay sắt");
		mp1.anUong("đồ chay", "3 bữa", "chùa");
		((ThieuLam) mp1).tungKinh();
		System.out.println("\n-------------------------\n");
		mp2.inTT();
		mp2.luyenCong("Kiếm gỗ");
		mp2.anUong("ăn Thịt", "3 bữa", "núi");
		((VoDang) mp2).giangDao();

		mp1.soTai(mp2);
	}
}
