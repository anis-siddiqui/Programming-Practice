/*
 * Decompiled with CFR 0.152.
 */
import java.util.*;

public class HelloUser {
    public static void main(String[] stringArray) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("What is your name : ");
        String string = scanner.nextLine();
        System.out.println("Hello, " + string);
        System.out.println("How are you? (I'm Fine , I'm Good , I'm not Fine , I'm not Good)");
        String string2 = scanner.nextLine();
        if (string2.equals("I'm Fine") || string2.equals("I'm Good")) {
            System.out.println("Good, How's your day? (Good , Amazing , Nice)");
            String string3 = scanner.nextLine();
            if (string3.equals("Good") || string3.equals("Amazing") || string3.equals("Nice")) {
                System.out.println("Good, my good wishes are with you.");
            } else {
                System.out.println("I hope your upcoming days will be good.");
            }
        } else if (string2.equals("I'm not Fine") || string2.equals("I'm not Good")) {
            System.out.println("What happened, why are you not fine? ");
            scanner.nextLine();
            System.out.println("I hope you'll feel better in a few days and everything will be fine.");
        } else {
            System.out.println("You're out of the topic");
        }
        scanner.close();
    }
}
