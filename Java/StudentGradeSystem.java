import java.util.Scanner;
public class StudentGradeSystem {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);

        System.out.print("Enter number of students : ");
        int a = sc.nextInt();
        sc.nextLine();

        String[] name = new String[a];
        String[] subject = {"Hindi", "English", "Maths", "Chemistry", "Physics"};
        int[][] marks = new int[a][5];
        int[] totalMarks = new int[a];
        float[] percentage = new float[a];
        char[] grade = new char[a];

        for(int i=0 ; i<a ; i++){
            System.out.print("Enter your name :-");
            name[i] = sc.nextLine();

            System.out.println("Enter your marks :-");
            for(int j=0 ; j<5 ; j++){
                System.out.print(subject[j] + " : ");
                marks[i][j] = sc.nextInt();
                totalMarks[i] = totalMarks[i] + marks[i][j];
            }

            percentage[i] = totalMarks[i] /5.0f;
            if(percentage[i] >= 90){
                grade[i] = 'A';
            }else if(percentage[i] >= 75){
                grade[i] = 'B';
            }else if(percentage[i] >= 60){
                grade[i] = 'C';
            }else if(percentage[i] >= 45){
                grade[i] = 'D';
            }else if(percentage[i] >= 33){
                grade[i] = 'E';
            }else if(percentage[i] < 33 ){
                grade[i] = 'F';
            }
            sc.nextLine();
        }


        for(int i=0 ; i<a ; i++){
            System.out.println("\n -----------------------------");

            System.out.println("Marks of Student :- " + name[i]);

            for(int j=0 ; j<5 ; j++){
                System.out.println(subject[j] + " : " + marks[i][j]);
            }

            System.out.println("Total marks :- " + totalMarks[i]);

            System.out.println("Percentage :- " + percentage[i]);

            System.out.println("Grade :- " + grade[i]);
            if(grade[i] == 'F'){
                System.out.println("You are fail");
            }
            b();
        }
        sc.close();
    }
    static int b(){
        return 10;
    }
}
