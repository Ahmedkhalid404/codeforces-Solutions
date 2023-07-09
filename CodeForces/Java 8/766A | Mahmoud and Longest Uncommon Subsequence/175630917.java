//package first_project;
 
import java.util.*;
 
public class First_project {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] x = new String[2];
        x[0] = input.next();
        x[1] = input.next();
        if( x[0].equals(x[1]) )
        {
            System.out.println("-1");
        }
        else
        {
            int max =Math.max(x[0].length(), x[1].length());
            System.out.println(max);
        }
    }
}