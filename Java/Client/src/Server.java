import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Server {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        // Khởi tạo một socket với cổng 9999
        ServerSocket server = new ServerSocket(9997);
        // chờ cho Socket khác kết nối đến
        Socket socket = server.accept();
        // tạo đối tượng DataInputStream để đọc dữ liệu
        DataInputStream dIn = new DataInputStream(socket.getInputStream());
        // Tạo đối tượng DataOutputStream để truyền dữ liệu đi
        DataOutputStream dOut = new DataOutputStream(socket.getOutputStream());
        while (true) {
            System.out.println("Enter message : ");
            // nhập tin nhắn và gửi cho client
            String mesage = sc.nextLine();
            // hàm WriteUTF() của OutputStream cho phép nó gửi Data dạng String đến InputStream của Client
            dOut.writeUTF(mesage);

            System.out.println("You say : " + mesage);
            // đọc tin nhắn từ client , dùng ReadUTF để đọc String
            String client_message = dIn.readUTF();
            System.out.println("Client say : " + client_message);
        }

    }
}