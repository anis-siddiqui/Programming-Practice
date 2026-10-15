import java.util.Scanner;
public class Operations{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a positive number: ");
        int n = sc.nextInt();
        if(n<=0){
            System.out.println("Number must be positive integer!!");
            sc.close();
            return;
        }
        int opt;
        do{
            System.out.println("\n----------MENU---------- \n\n1.Prime \n2.Palindrome \n3.Armstrong \n4.Factorial \n5.Fibonacci \n6.Sum of Digit \n7.Exit");
            System.out.print("Enter Option: ");
            opt = sc.nextInt();
            switch(opt){
                case 1:
                    prime(n);
                    break;
                case 2:
                    palindrome(n);
                    break;
                case 3:
                    armstrong(n);
                    break;
                case 4:
                    factorial(n);
                    break;
                case 5:
                    fibonacci(n);
                    break;
                case 6:
                    sumOfDigits(n);
                    break;
                case 7:
                    break;
                default:
                    System.out.println("Invalid input!!");
                    break;

            }
        }while(opt!=7);
        sc.close();
    }

    static void prime(int n){
        int prime = 1;
        if(n==1){
            System.out.println("Not prime");
            return;
        }
        for(int i=2; i<n; i++){
            if(n%i==0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            System.out.println("Prime");
        }else{
            System.out.println("Not prime");
        }
    }

    static void palindrome(int n){
        int rev = 0;
        int copy = n;
        while(copy>0){
            rev = rev*10 + copy%10;
            copy = copy/10;
        }
        if(rev==n){
            System.out.println("Palindrome");
        }else{
            System.out.println("Not palindrome");
        }
    }
    
    static void armstrong(int n){
        int count = 0;
        int total = 0;
        int copy = n;
        while(copy>0){
            copy = copy/10;
            count++;
        }
        copy = n;
        while(copy>0){
            int num1 = copy%10;
            int num2 = num1;
            for(int i=1; i<count; i++){
                num2 = num2*num1;
            }
            total = total+num2;
            copy = copy/10;
        }
        if(total==n){
            System.out.println("Armstrong number");
        }else{
            System.out.println("Not Armstrong number");
        }
        System.out.println("\n");
    }

    static void factorial(int n){
        int fac =1;
        for(int i=1; i<=n; i++){
            fac = fac*i;
        }
        System.out.println("Factorial: " + fac);
        System.out.println("\n");
    }

    static void fibonacci(int n){
        int first = 0 , second = 1;
        for(int i=0; i<n; i++){
            if(i==0){
                System.out.print(first + " ");
                continue;
            }
            System.out.print(second + " ");
            int temp = second;
            second = second+first;
            first = temp;
        }
        System.out.println("\n");
    }

    static void sumOfDigits(int n){
        int sum = 0;
        int copy = n;
        while(copy>0){
            sum = sum+copy%10;
            copy = copy/10;
        }
        System.out.println("Sum of digits: " + sum);
        System.out.println("\n");
    }
}