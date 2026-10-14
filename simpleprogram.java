class Book {
    // Instance variables
    String title;
    String author;
    double price;

    // Parameterized constructor
    Book(String title, String author, double price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    // Method to display book details
    void displayDetails() {
        System.out.println("Book Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Price: Rs. " + price);
        System.out.println("----------------------");
    }
}

public class simpleprogram  {
    public static void main(String[] args) {
        // Creating two Book objects
        Book b1 = new Book("Java Programming", "Anisha", 500.00);
        Book b2 = new Book("Python Basics", "John Smith", 450.00);

        // Displaying book details
        System.out.println("Book 1 Details:");
        b1.displayDetails();

        System.out.println("Book 2 Details:");
        b2.displayDetails();
    }
}
