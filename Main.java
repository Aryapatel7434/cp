import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {

            int n = sc.nextInt();

            int y = sc.nextInt();  // yellow cards FIRST
            int r = sc.nextInt();  // red cards SECOND

            int ans = Math.min(n, r + y / 2);

            System.out.println(ans);
        }
    }
}
