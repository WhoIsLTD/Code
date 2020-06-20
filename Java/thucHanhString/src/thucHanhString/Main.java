package thucHanhString;

public class Main {
	public static void main(String[] args) {
//	String text1 = "ABC";
//	String text2 = "ABC";
//	String text3 = new String ("ABC");
//	String text4 = new String ("ABC");
//	boolean rs1 = text1 == text2;
//	System.out.println("pool == pool: " + rs1);
//	rs1 = text1.equals(text2);
//	System.out.println("pool equals pool: " + rs1);
//	rs1 = text1.equals(text3);
//	System.out.println("pool equals heap: " + rs1);
//	rs1 = text4.equals(text3);
//	System.out.println("heap equals heap: " + rs1);
		String text = "Hello1 An2dro5id";
		int tong = 0;
		for (int viTri = 0; viTri < text.length(); viTri++) {
			char nam = text.charAt(viTri);
			if(nam >= '0' && nam <= '9')
				tong += nam - 48;
				
			
		}System.out.println(tong);
	}
}
