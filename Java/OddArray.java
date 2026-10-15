import java.util.*;
public class OddArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 5 numbers :-");
        int[] num = new int[5];
        for(int i=0 ; i<num.length ; i++){
            num[i] = sc.nextInt();
        }
        int even = 0;
        for(int i=0 ; i<num.length ; i++){
            if(num[i]%2 == 0){
                even++;
            }
        }
        int odd = num.length - even;
        System.out.println("Total Even numbers = " + even);
        System.out.println("Total Odd numbers = " + odd);
        sc.close();
    }
}
