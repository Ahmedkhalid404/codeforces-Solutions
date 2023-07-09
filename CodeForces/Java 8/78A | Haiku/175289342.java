//package first_project;
 
import java.util.*;
 
public class First_project {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] word = new String[3];
        int count = 0;
        word[0] = input.nextLine();
        word[1] = input.nextLine();
        word[2] = input.nextLine();
        word[0] = word[0].trim();
        word[1] = word[1].trim();
        word[2] = word[2].trim();
        for (int j = 0; j < word.length; j++) {
            for (int i = 0; i < word[j].length(); i++) {
                if (word[j].charAt(i) == 'a' || word[j].charAt(i) == 'e' || word[j].charAt(i) == 'i' || word[j].charAt(i) == 'o' || word[j].charAt(i) == 'u') {
                    count++;
                }
            }
            if (j == 0 || j == 2) {
                if (count != 5) {
                    System.out.print("NO");
                    System.exit(0);
                }
 
            } else {
                if (count != 7) {
                    System.out.print("NO");
                    System.exit(0);
                }
            }
            count = 0;
        }
        System.out.print("YES");
    }
}