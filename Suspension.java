import java.util.Scanner;
public class Suspension {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);

        int t=sc.nextInt();

        while(t-- > 0){
            int n=sc.nextInt();
            int r=sc.nextInt();
            int y=sc.nextInt();

            int z=y/2;
            System.out.println(Math.min(n,z+r));
        }
    }
}

