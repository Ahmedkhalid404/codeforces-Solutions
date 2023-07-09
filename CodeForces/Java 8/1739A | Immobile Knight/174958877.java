 
 
import java.util.*;
 
public class First_project {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int r,c,size;
        size = input.nextInt();
        for (int i = 0; i < size; i++) {
            r = input.nextInt();
            c = input.nextInt();
            int k = r/2;
            int j = c/2;
            if(r%2!=0)
                k++;
            if(c%2!=0)
                j++;
            if(k-1<1||k-2<1||k+1>r||k+2>r)
            {
                if(j-1<1||j-2<1||j+1>c||j+2>c)
                {
                    System.out.println(k+" "+j);
                }
                else{
                    System.out.println("1"+" "+"1");
                }
            }
            else{
                System.out.println("1"+" "+"1");
            }
            System.out.println("");
        }
        
    }
    
}