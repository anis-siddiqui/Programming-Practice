import java.util.*;

public class MaxElement{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] num = new int[5];
        for(int i=0 ; i<num.length ; i++){
            num[i] = sc.nextInt();
        }

        int max = num[0];
        for(int i=0 ; i<num.length ; i++){
            if(num[i]>max){
                max = num[i];
            }
        }
        System.out.println("Max Element is = " + max);
        sc.close();
    }
}