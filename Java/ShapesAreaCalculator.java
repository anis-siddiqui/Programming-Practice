import java.util.Scanner;
public class ShapesAreaCalculator {
    public static void main(String[] args) {
       
        Scanner sc = new Scanner(System.in);
        boolean repeat;
        do{
            System.out.print(""" 
                Aap kiska radius aur perimeter janna chahte hai ?
                    1. Circle
                    2. Rectangle
                    3. Triangle
            Enter Choice :- """);
            int choice = sc.nextInt();

            if(choice == 1){
                System.out.print("Enter Radius :-");
                float r = sc.nextFloat();
                Shape circle = new Circle(r);
                System.out.println("Area of circle = " + circle.area());
                System.out.println("Perimeter of circle = " + circle.perimeter());
            }else if(choice == 2){
                System.out.println("Enter value in this order (length -> breadth) :-");
                float l = sc.nextFloat();
                float b = sc.nextFloat();            
                Shape rectangle = new Rectangle(l , b);
                System.out.println("Area of rectangle = " + rectangle.area());
                System.out.println("Perimeter of rectangle = " + rectangle.perimeter());
            }else if(choice == 3){
                System.out.println("Enter value in this order (Hypotenuse -> Base -> Height -> a -> b -> c) :-");
                float bas =sc.nextFloat();
                float hei =sc.nextFloat();
                float a =sc.nextFloat();
                float b =sc.nextFloat();
                float c =sc.nextFloat();
                Shape triangle = new Triangle(bas , hei , a , b , c);
                System.out.println("Area of triangle = " + triangle.area());
                System.out.println("Perimeter of triangle = " + triangle.perimeter());
            }else{
                System.out.println("You entered wrong choice ");
            }

            System.out.println("Do you want to continue ? (True/False)");
            repeat = sc.nextBoolean();

    }while(repeat == true);

    sc.close();

    }
}



abstract class Shape{
    abstract float area();
    abstract float perimeter();
}
 


class Circle extends Shape{ 
    private float radius;
    
    Circle(float radius){
        this.radius = radius;
    }
    
    float area(){
        float area = (float)3.14*radius*radius;
        return area;
    }
 
    float perimeter(){
        float perimeter = (float)3.14*2*radius;
        return perimeter;
    }
}



class Rectangle extends Shape{ 
    private float length , breadth;

    Rectangle(float length , float breadth){
        this.length = length; 
        this.breadth = breadth;
    }

    float area(){
        float area = length*breadth;
        return area;
    }
 
    float perimeter(){
        float perimeter = 2*(length + breadth);
        return perimeter;
    }
}



class Triangle extends Shape{ 
    private float base , height , a , b , c ; 

    Triangle(float base , float height , float a , float b , float c){
        this.base = base ;
        this.height = height ;
        this.a = a;
        this.b = b;
        this.c = c;
    }

    float area(){
        float area = (float)1.0/2*(base*height);
        return area;
    }
 
    float perimeter(){
        float perimeter = a+b+c;
        return perimeter;
    }
}

