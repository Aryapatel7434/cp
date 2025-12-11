import java.util.Scanner;
class contest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int a = sc.nextInt();

            int l = 0, r = 0;
            int arr[] = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if (a > arr[i]) l++;
                if (a < arr[i]) r++;
            }

            if (l > r) {
                System.out.println(a - 1);
            } else {
                System.out.println(a + 1);
            }
        }
    }
}
