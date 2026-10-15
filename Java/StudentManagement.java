import java.util.Scanner;

public class StudentManagement{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter how many students you want to enter: ");
        int n = sc.nextInt();
        Student[] students = new Student[n];
        for(int i = 0; i<n; i++){
            System.out.println("Enter details of student " + (i+1));
            System.out.print("Enter Roll number: ");
            int rollNum = sc.nextInt();
            sc.nextLine();
            System.out.print("Enter Name: ");
            String name = sc.nextLine();
            System.out.print("Enter Marks(0-100): ");
            int marks = sc.nextInt();
            System.out.println();
            students[i] = new Student(rollNum,name,marks);
        }
        Student.grade(students, n);
        int opt;
        do{
            System.out.println("---Press number--- \n 1.Print Students Detail \n 2.Print Average \n 3.Find Topper \n 4.Exit");
            System.out.print("Enter Option: ");
            opt = sc.nextInt();
            switch(opt){
                case 1:
                    printDetail(students,n);
                    break;
                case 2:
                    System.out.println("Average: " + Student.average(students, n));
                    System.out.println();                    
                    break;
                case 3:
                    System.out.println("Topper name: "+students[Student.topper(students,n)].name);
                    System.out.println();
                    break;
                case 4:
                    break;
                default:
                    System.out.println("Invalid input!!");
                    break;
                }
        }while(opt<=4 && opt>0);
        sc.close();
    }


    static void printDetail(Student[] students, int n){
        System.out.println("\n\n---------------STUDENTS DETAILS---------------\n");
        for(int i=0; i<n; i++){
            System.out.println("Student number: "+(i+1));
            System.out.println("Roll number: "+students[i].rollNum);
            System.out.println("Name: "+students[i].name);
            System.out.println("Marks: "+students[i].marks);
            System.out.println("Grade: "+students[i].grade);
            System.out.println();
        }
    }

}

class Student{
    int rollNum;
    String name;
    int marks;
    char grade;

    Student(int rollNum, String name, int marks){
        this.rollNum = rollNum;
        this.name = name;
        this.marks = marks;
    }

    static float average(Student[] students , int n){
        int sum=0;
        for(int i = 0; i<n; i++){
            sum = sum + students[i].marks;
        }
        float average = (float)sum/n;
        return average;
    }

    static void grade(Student[] students, int n){
        char grade;
        for(int i=0; i<n; i++){
            if(students[i].marks>=80){
                grade = 'A';
            }else if(students[i].marks>=60){
                grade = 'B';
            }else if(students[i].marks>=40){
                grade ='C';
            }else{
                grade = 'F';
            }
            students[i].grade = grade;
        }
    }
    static int topper(Student[] students, int n){
        int topper = 0;
        for(int i=0; i<n; i++){
            if(students[i].marks>students[topper].marks){
                topper = i;
            }
        }
        return topper;
    }
}
