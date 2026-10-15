// import java.util.Scanner;
// public class star {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter number of lines :- ");
//         int num = sc.nextInt();
//         for(int i = 1 ; i <= num ; i++){
//             System.out.println("*****");
//         }
//         sc.close();
//     }
// }





// import java.util.Scanner;
// public class star {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter number of lines :- ");
//         int num = sc.nextInt();
//         for(int i = 1 ; i <= num ; i++){
//             for(int j=1 ; j<=i ; j++){
//                 System.out.print('*');
//             }
//             System.out.println("");
//         }
//         sc.close();
//     }
// }





// import java.util.Scanner;
// public class star{
    //     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter length of box :- ");
//         int width = sc.nextInt();
//         System.out.print("Enter width of box :- ");
//         int length = sc.nextInt();
//         for(int i=1 ; i <= length ; i++){
//             for(int j=1 ; j<=width ; j++){
//                 if(i==1 || j==1 || i==length ||j==width){
//                     System.out.print("*");
//                 }else{
//                     System.out.print(" ");
//                 }
//             }
//             System.out.println("");
//         }
//         sc.close();
//     }
// }


import java.util.Scanner;
public class star{
 public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        for(int i=0 ; i<a ;i++){
            for(int j=0 ; j<b ; j++){
                System.out.print("*");
            }
            System.out.println("");
        }
        sc.close();
    }
}