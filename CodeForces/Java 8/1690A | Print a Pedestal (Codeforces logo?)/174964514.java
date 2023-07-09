//package first_project;
import java.util.*;
public class First_project {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size=input.nextInt();
        for (int i = 0; i < size; i++) {
            int num = input.nextInt();
            int h1,h2,h3;
            int divid = num / 3;
            int reminder = num % 3;
            if(reminder == 0){
                h1 = divid;
                h2 = divid + 1;
                h3 = divid - 1;
            }
            else if(reminder == 1){
                h1 = divid;
                h2 = divid + 2;
                h3 = divid - 1;
            }
            else{
                h1 = divid + 1;
                h2 = divid + 2;
                h3 = divid - 1;
            }
            System.out.println(h1 + " " + h2 + " " + h3);
        }
        
        
    }
    
}