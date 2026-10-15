import java.util.*;
public class SumArray{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        System.out.println("Enter 5 numbers :- ");
        for(int i = 0 ; i<arr.length ; i++){
            arr[i] = sc.nextInt();
        }
        int a = 0;
        for(int i = 0 ; i<arr.length ; i++){
            a = a + arr[i];
        }
        System.out.println("Sum of given numbers = " + a);
        sc.close();
    }
}