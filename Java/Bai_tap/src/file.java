
import java.io.File;
import java.io.FileInputStream;

import java.io.IOException;

public class file {

	public static boolean snt(int a) {
		if (a < 2) {
			return false;
		}
		for (int i = 2; i <= Math.sqrt(a); i++) {
			if (a % i == 0) {
				return false;
			}
		}
		return true;
	}

	public static void main(String[] args) throws IOException {
		File file = new File("Matran.txt");
		FileInputStream fis = new FileInputStream(file);

		fis.skip(4);
		int c = fis.read();
		while (c != -1) {
			int a = Character.getNumericValue((char) c);
			if (snt(a) == true)
				System.out.println(a);
			c = fis.read();
		}
		fis.close();
	}

}
