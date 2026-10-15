import java.util.Scanner;
public class RectangleCalculator {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of rectangle : ");
        float l = sc.nextFloat();
        System.out.print("Enter the width of rectangle : ");
        float w = sc.nextFloat();
        float area = l*w;
        float perimeter = 2*(l+w);
        System.out.println("Area of rectangle is " + area);
        System.out.println("Perimeter of rectangle is " + perimeter);
        sc.close();
    }
}
