import java.math.BigInteger;
import java.util.Scanner;
public class bigInteger {
    public static void main(String[] args) {
        Scanner inp=new Scanner(System.in);
        String input1=inp.nextLine();
        String input2=inp.nextLine();
        BigInteger a=new BigInteger(input1);
        BigInteger b=new BigInteger(input2);
        System.out.println(a.add(b));
        System.out.println(a.multiply(b));

    }
}
