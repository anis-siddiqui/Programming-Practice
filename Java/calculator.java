import java.util.Scanner;
public class calculator {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in); 
        System.out.print("Enter first number : ");
        Float a = sc.nextFloat();
        System.out.print("Enter second number : ");
        float b = sc.nextFloat();
        float add = a + b;
        float substract = a - b;
        float multiply = a*b;
        float divide = a/b;
        System.out.println("addition of your number = " + add);
        System.out.println("Substraction of your number = " + substract);
        System.out.println("Multiplication of your number = " + multiply);
        System.out.println("Division of your number = " + divide);
        sc.close();
    }
}
