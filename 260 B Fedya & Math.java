import java.math.*;
import java.util.Scanner;

public class BigMath{
    public static void main(String arg[]){
        BigInteger n;
        int a,r;
        Scanner reader = new Scanner(System.in);
        int n = reader.nextBigInteger();
        a = n%4;

        if(a == 0){
            r=4;
            System.out.println(r);
        }
        else{
            r = 0;
            System.out.println(r);
        }
    }
}
