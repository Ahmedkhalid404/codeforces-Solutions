//package first_project;
 
import java.util.*;
 
public class First_project {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int r,c,size;
        size = input.nextInt();
        for (int i = 0; i < size; i++) {
            r = input.nextInt();
            c = input.nextInt();
            if(r > 2 && c > 3 || r > 3 && c > 2 ){
                System.out.println("1"+" "+"1");
            }
            else{
                if(r%2!=0)
                {
                    r/=2;
                    r++;
                }
                else{
                    r/=2;
                }
                if(c%2!=0)
                {
                    c/=2;
                    c++;
                }
                else{
                    c/=2;
                }
                System.out.println(r + " " + c);
            }
//            System.out.println("");
        }
        
    }
    
}