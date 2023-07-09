import java.util.*;
public class Contest {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt(); // misha points
        int b = input.nextInt(); // vasya points
        int c = input.nextInt(); // misha submited problem in c min
        int d = input.nextInt(); // vasya submited problem in d min
        
        double allPointsMisha = calculatePoints(a,c); // misha points with time submited
        double allPointsVasya = calculatePoints(b,d); // vasya points with time submited
        
        int mishaOrVasya = winner(allPointsMisha,allPointsVasya);// who max point misha or vasya
        
        if(mishaOrVasya == 1)
            System.out.print("Misha");
        else if(mishaOrVasya == -1)
            System.out.print("Vasya");
        else
            System.out.print("Tie");
    }
    /*
        points calculate with time by
            max(3*point/10,point-p/250*time);
     */
    public static double calculatePoints(int points, int time) {
        double allPoints = Math.max(3*points/10.0,points-points/250.0*time); // calculat  point with his time submited
        return allPoints;
    }
    public static int winner(double misha,double vasya){
        if(misha > vasya)
            return 1;
        else if(misha < vasya)
            return -1;
        else
            return 0;
    }
}