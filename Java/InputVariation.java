import java.io.*;
import java.util.*;

public class InputVariation{
    public static void main(String[] args) throws IOException{
    // 1. System.in.read(); --> Only store 1 byte of data and its return type is int.

        String name1 = "";
        int c = 0 ;
        while(c !='\n'){
            c = System.in.read();
            name1 += (char)c;
        } 
        System.out.println(name1);

    //2. BufferedReader collects chunk of character from OS buffer and store it in memory and give them to program when required 
    // BufferedReader is stream of character and its not compatible with InputStream because Inputstream isstram of byte 
    // so we use InputStreamReader to convert stream of byte into Stream of Data


    // // System.in gives byte stream input from keyboard

    // // InputStreamReader converts byte stream into character stream

    // // BufferedReader stores characters in buffer memory
    // // and provides efficient reading methods like readLine()

    InputStreamReader isr = new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(isr);
    String name2 = br.readLine();
    System.out.println(name2);



    //3. By creating Scannes class object

    Scanner sc = new Scanner(System.in); 
        
    String name3 = sc.nextLine();
    System.out.println(name3);

    sc.close();

    }
}

