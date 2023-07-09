import java.math.BigInteger;
import  java.util.*;
public class Main {
    public static void main(String[] Ahmed){
        Scanner input = new Scanner(System.in);
        String numbre = input.next();
        BigInteger num = new BigInteger( numbre );
 
        if( new BigInteger("-128").compareTo(num) <= 0 &&  new BigInteger("127").compareTo(num) >=0)
        {
            System.out.print("byte");
        }
        else if( new BigInteger("-32768").compareTo(num) <= 0 &&  new BigInteger("32767").compareTo(num) >=0)
        {
            System.out.print("short");
        }
        else if( new BigInteger("-2147483648").compareTo(num) <= 0 &&  new BigInteger("2147483647").compareTo(num) >=0)
        {
            System.out.print("int");
        }
        else if( new BigInteger("-9223372036854775808").compareTo(num) <= 0 &&  new BigInteger("9223372036854775807").compareTo(num) >=0)
        {
            System.out.print("long");
        }
        else
            System.out.print("BigInteger");
    }
}