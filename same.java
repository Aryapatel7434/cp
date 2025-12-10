import java.util.Scanner;
public class same {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();

        while(t-- > 0){
            int n=sc.nextInt();
            String s=sc.next();

            int m=0;
            char lastchar=s.charAt(n-1);

            for(int i=0;i<n-1;i++){
                if(s.charAt(i)!=lastchar){
                    m++;
                }
            }
            System.out.println(m);
        }
    }
    
}
