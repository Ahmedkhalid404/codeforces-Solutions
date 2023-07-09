import java.util.*;
public class Test {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        long x = input.nextLong();
        System.out.println( ((x & 1) == 1) ? x/2 : x/2-1 );
    }
}
 