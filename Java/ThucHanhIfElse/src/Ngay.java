
public class Ngay {
	private static final int THU_2 = 2;
	private static final int THU_3 = 3;
	private static final int THU_4 = 4;
	private static final int THU_5 = 5;

	public static void main(String[] args) {
		int thu = 4;
		switch(thu) {
		case THU_2:
			System.out.println("Toan");
			break;
		case THU_3:
		case THU_4:
			System.out.println("Van");
			break;
		case THU_5:
			System.out.println("hoc tieng anh");
			break;
		default:
			System.out.println("nghi");
		}
	}
}
