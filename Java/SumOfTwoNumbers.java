import java.util.Scanner;
public class SumOfTwoNumbers{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first number : ");
        float a = input.nextFloat();
        System.out.print("Enter second number : ");
        float b = input.nextFloat();
        float sum = a + b;
        System.out.println("Sum of numbers is " + sum);
        input.close();
    }
}