

public class bai1 {
    public static void main(String[] args) {
        int[] mang = new int[10];
int s = 0;
int j = 0;
for ( int i : mang) {
i = ++j;
s += i;
}
System.out.println("S = "+ s);
    }
}