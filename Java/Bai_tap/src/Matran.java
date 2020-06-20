
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class Matran {
    public static void main(String[] args) throws IOException {
 
        int soDong, soCot;

        Scanner sc = new Scanner(System.in);

        System.out.println("Nhap vao hang: ");
        soDong = sc.nextInt();
        System.out.println("Nhap vao cot: ");
        soCot = sc.nextInt();

        int[][] A = new int[soDong][soCot];

        for (int i = 0; i < soDong; i++) {
            for (int j = 0; j < soCot; j++) {
                System.out.print("Nhap [" + i + ", " + j + "]: ");
                A[i][j] = sc.nextInt();
            }
        }

        System.out.println("Ma tran vau nhap: ");
        for (int i = 0; i < soDong; i++) {
            for (int j = 0; j < soCot; j++) {
                System.out.print(A[i][j] + "\t");
            }
            System.out.println("\n");
        }
        File file = new File("Matran.txt");
        
        if(!file.exists()) {
        	file.createNewFile();
        }
        FileWriter fw = new FileWriter(file);
        fw.write(soDong +"\t"+ soCot + "\n");
        for (int i = 0; i < soDong; i++) {
            for (int j = 0; j < soCot; j++) {
            	fw.write(A[i][j] + "\t");
            }
            fw.write("\n");
        }
        fw.close();

    }
    
}