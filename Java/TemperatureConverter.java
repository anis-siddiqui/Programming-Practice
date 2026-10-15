import java.util.Scanner;
public class TemperatureConverter {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("""
        Temperature Converter :-
            1. Celsius to Fahrenheit
            2. Celsius to Kelvin
            3. Fahrenheit to Celsius
            4. Fahrenheit to Kelvin
            5. Kelvin to Celsius
            6. Kelvin to Fahrenheit
        """);
        System.out.print("Enter option : ");
        int opt = sc.nextInt();
        System.out.print("Enter temperature : ");
        float temp = sc.nextFloat();
        double newTemp;
        if(opt == 1){
            newTemp =(temp * 1.8)+32;
            System.out.println(newTemp);
        }else if(opt == 2){
            newTemp = temp + 273.15;
            System.out.println(newTemp);
        }else if(opt == 3){
            newTemp = 5.0/9*(temp - 32);
            System.out.println(newTemp);
        }else if(opt == 4){
            newTemp =(temp - 32) / 1.8 + 273.15;
            System.out.println(newTemp);
        }else if(opt == 5){
            newTemp = temp -273.15;  
            System.out.println(newTemp);
        }else if(opt == 6){
            newTemp  = ( (temp - 273.15) * 9/5) + 32;
            System.out.println(newTemp);
        }
        sc.close();
    }
}
