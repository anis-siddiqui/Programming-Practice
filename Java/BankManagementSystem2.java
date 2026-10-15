import java.util.*;
import java.io.*;

public class BankManagementSystem2{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        ArrayList <Account> account= new ArrayList<>();

        try{
            ObjectInputStream in = new ObjectInputStream( new FileInputStream("bank.dat"));
            account = (ArrayList<Account>) in.readObject();
            if(!account.isEmpty()){
                Account.ac = account.get(account.size()-1).accountNo;
}
            in.close();
        }catch(Exception e){
            System.out.println(e.getMessage());
        }

        int opt;
        int accNo = 0;

        do{

            System.out.println("\n---------------Account Menu---------------");
            System.out.println("1.Create\n2.Deposit\n3.Withdraw\n4.Show Balance\n5.Show Details\n6.Exit");
            System.out.println("---------------------------------------------\n");

            System.out.print("Enter your choice(1-6): ");
            opt = sc.nextInt();
            sc.nextLine();

            if(opt>=2 && opt<=5){
                System.out.print("Enter account number: ");
                accNo = sc.nextInt();
                sc.nextLine();
            }

            switch(opt){
                case 1:
                    create(sc , account);
                    break;
                case 2:
                    depo(sc , account , accNo);
                    break;
                case 3:
                    withd(sc , account , accNo);
                    break;
                case 4:
                    printB(account , accNo);
                    break;
                case 5:
                    printD(account , accNo);
                    break;
                case 6:
                    break;
                default: 
                    System.out.println("Invalid input!!");
                    break;
            }

        }while(opt!=6);

        System.out.println("Successfully Exit!!");

        

        try{ObjectOutputStream out = new ObjectOutputStream( new FileOutputStream("bank.dat"));
            out.writeObject(account);
            out.close();
        }catch(Exception e){
            System.out.println(e.getMessage());
        }

        sc.close();
    }


    static void create(Scanner sc , ArrayList<Account> account){
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        System.out.print("Enter your age: ");
        int age = sc.nextInt();
        System.out.print("Enter your Mobile Number: ");
        long mobNo = sc.nextLong();
        System.out.print("Enter some amount to open your account: ");
        double balance = sc.nextDouble();
        sc.nextLine();

        Account acc = new Account(name, age , mobNo, balance);
        account.add(acc);

        try(BufferedWriter fw = new BufferedWriter(new FileWriter("BankManagement.txt" , true))){
            fw.write("\n---------------Details---------------\n");
            fw.write("Account holder's name: " + name + "\n");
            fw.write("Account holder's age: " + age + "\n");
            fw.write("Branch: " + Account.branchName + "\n");
            fw.write("Account holder's Account number: " + acc.accountNo + "\n");
            fw.write("Account holder's Phone number: " + mobNo + "\n");
            fw.write("Account holder's balance: " + acc.showBalance() + "\n");
            fw.write("---------------------------------------------\n");
        }catch(Exception e){
            System.out.println(e.getMessage());
        }


        System.out.println("Account created successfully!!");
        System.out.println("Your account number is: " + acc.accountNo);
    }


    static void depo(Scanner sc , ArrayList<Account> account , int accNo){
        for(Account acc : account){
            if(acc.accountNo == accNo){
                System.out.print("Enter amount to deposit: ");
                double amount = sc.nextDouble();
                acc.deposit(amount);
                return;
            }
        }
        System.out.println("Invalid account number!!\n");
    }


    static void withd(Scanner sc , ArrayList<Account> account , int accNo){
        for(Account acc : account){
            if(acc.accountNo == accNo){
                System.out.print("Enter amount to withdraw: ");
                double amount = sc.nextDouble();
                acc.withdraw(amount);
                return;
            }
        }
        System.out.println("Invalid account number!!\n");
    }
    

    static void printB(ArrayList<Account> account , int accNo){
        for(Account acc : account){
            if(acc.accountNo == accNo){
                System.out.println("Available Balance : " + acc.showBalance());
                return;
            }
        }
        System.out.println("Invalid account number!!\n");
    }
    

    static void printD(ArrayList<Account> account , int accNo){
        for(Account acc : account){
            if(acc.accountNo == accNo){
                acc.showDetails();
                return;
            }
        }
        System.out.println("Invalid account number!!\n");
    }

}




class Account implements Serializable{
    String name;
    int age;
    final static String branchName = "Sandalpur"; 
    final int accountNo;
    final long phoneNo; 
    private double balance;
    static int ac = 10000;


    Account(String name , int age , long phoneNo , double balance){
        this.name = name;
        this.age = age;
        this.phoneNo = phoneNo;
        this.balance = balance;
        this.accountNo = ac+1;
        ac++;
    }

    void deposit(double amount){
        if(amount > 0){
            balance += amount;
        }else{
            System.out.println("Deposit fail!! \nCannot deposit negative amount");
        }
    }

    void withdraw(double amount){
        if(balance >= amount && amount > 0){
            balance -= amount;
        }else{
            System.out.println("Withdraw fail!! \nYou balance is less than withdraw amount!!");
        }
    }

    double showBalance(){
        return balance;
    }

    public void showDetails(){
        System.out.println("\n---------------Details---------------\n");
        System.out.println("Account holder's name: " + this.name);
        System.out.println("Account holder's age: " + this.age);
        System.out.println("Branch: " + Account.branchName);
        System.out.println("Account holder's Account number: " + this.accountNo);
        System.out.println("Account holder's Phone number: " + this.phoneNo);
        System.out.println("Account holder's balance: " + balance);
        System.out.println("\n---------------------------------------------\n");
    }
} 
