import java.util.Scanner;
public class y {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);

        int t=sc.nextInt();

        while(t-->0){
            int x=sc.nextInt();
            int y=sc.nextInt();

            if(x==1 && y==1){
                System.out.println(1);
            }
            else{
                System.out.println(y-x);
            }
        }
    }
    
}
