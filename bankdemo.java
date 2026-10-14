class BankAccount {

    // Private data members
    private int accountNumber;
    private String accountHolder;
    private double balance;

    // Setter methods
    public void setAccountNumber(int accountNumber) {
        this.accountNumber = accountNumber;
    }

    public void setAccountHolder(String accountHolder) {
        this.accountHolder = accountHolder;
    }

    // Getter methods
    public int getAccountNumber() {
        return accountNumber;
    }

    public String getAccountHolder() {
        return accountHolder;
    }

    public double getBalance() {
        return balance;
    }

    // Method to deposit money
    public void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            System.out.println("Amount deposited: " + amount);
        }
    }

    // Method to withdraw money
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            System.out.println("Amount withdrawn: " + amount);
        } else {
            System.out.println("Insufficient balance!");
        }
    }
}

// Main class
public class bankdemo {

    public static void main(String[] args) {

        BankAccount account = new BankAccount();

        // Set account details
        account.setAccountNumber(1001);
        account.setAccountHolder("Priya");

        // Perform transactions
        account.deposit(10000);
        account.withdraw(3000);

        // Display details
        System.out.println("Account Number: " 
                           + account.getAccountNumber());

        System.out.println("Account Holder: " 
                           + account.getAccountHolder());

        System.out.println("Balance: " 
                           + account.getBalance());
    }
}
