JAVA-PROGRAMS

A collection of Java programs for learning and practicing programming concepts, including object-oriented programming (OOP), classes, objects, and banking operations.

📌 Project Overview

This repository contains Java programs, including a BankAccount class that demonstrates basic banking operations such as:

Setting account details
Retrieving account information
Depositing money
Withdrawing money
Checking account balance
🛠️ Technologies Used
Java – Core programming and object-oriented concepts
Python 3 – For Python programming and future machine learning projects
Machine Learning Libraries – NumPy, Pandas, Matplotlib, and Scikit-learn
IDE / Editor – IntelliJ IDEA, Visual Studio Code, or any Java-compatible editor
💻 Installation and Setup
1. Install Java (JDK)

Download and install the Java Development Kit (JDK).

Download: https://www.oracle.com/java/technologies/downloads/

Verify the installation in PowerShell:

java -version
javac -version


Both commands should display the installed Java version.

2. Install Python 3

Download Python 3 from:

https://www.python.org/downloads/

During installation on Windows, select Add Python to PATH.

Verify the installation:

python --version


If that command does not work, try:

py --version

3. Install Machine Learning Libraries

Install the following Python libraries using pip:

python -m pip install numpy pandas matplotlib scikit-learn


If you use the Windows Python launcher, you can also run:

py -m pip install numpy pandas matplotlib scikit-learn


These libraries are useful for numerical computing, data analysis, data visualization, and machine learning.

4. Install an IDE or Code Editor

You can use any of the following tools:

IntelliJ IDEA: https://www.jetbrains.com/idea/
Visual Studio Code: https://code.visualstudio.com/
Eclipse IDE: https://eclipseide.org/
▶️ How to Run a Java Program
Step 1: Open the project folder

Open PowerShell and navigate to your project directory:

cd C:\ANISHA

Step 2: Compile the Java file

If your source file is named BankAccount.java, run:

javac BankAccount.java

Step 3: Run the Java program

The BankAccount class does not currently contain a main() method, so it cannot run as a standalone program.

Create a separate file named Main.java in the same folder with the following code:

public class Main {
    public static void main(String[] args) {
        BankAccount account = new BankAccount();

        account.setAccountNumber(101);
        account.setAccountHolder("Anisha");

        account.deposit(5000);
        account.withdraw(1500);

        System.out.println("Account Number: "
                + account.getAccountNumber());
        System.out.println("Account Holder: "
                + account.getAccountHolder());
        System.out.println("Current Balance: "
                + account.getBalance());
    }
}

Step 4: Compile and run both files

Execute these commands from the folder containing both Java files:

javac BankAccount.java Main.java
java Main

Expected Output
Amount deposited: 5000.0
Amount withdrawn: 1500.0
Account Number: 101
Account Holder: Anisha
Current Balance: 3500.0

📚 Concepts Practiced
Classes and objects
Encapsulation
Private data members
Getter and setter methods
Conditional statements
Methods and parameters
Basic banking operations
⚠️ Notes
Ensure that the JDK is installed and configured correctly.
The Java source filename must match the name of its public class.
The BankAccount class should be saved as BankAccount.java.
The Main class should be saved as Main.java.
The current program is a learning example, not a production-ready banking system.
👩‍💻 Author

Anisha

📄 License

This project is intended for educational and learning purposes.
