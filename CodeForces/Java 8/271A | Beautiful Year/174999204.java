//package first_project;
 
import java.util.*;
 
public class First_project {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String number;
        number = input.next();
        while (true) {
            int x = Integer.parseInt(number) + 1;
            number = x + ""; 
            boolean flag = true;
            for (int i = 0; i < number.length(); i++) {
                for (int j = 0; j < number.length(); j++) {
                    if (i == j) {
                        continue;
                    }
                    if (number.charAt(i) == number.charAt(j)) {
                        flag = false;
                        break;
                    }
                }
                if (!flag) {
                    break;
                }
            }
            if (flag) {
                System.out.println(number);
                System.exit(0);
            }
        }
    }
 
}