import java.util.Scanner;

public class LargestNumberFinder {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();

        if (n <= 0) {
            System.out.println("Invalid input. Please enter a positive number of elements.");
            return ;
        }
        int[] numbers = new int[n];
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            numbers[i] = scanner.nextInt();
        }
        int largest = numbers[0];
        for (int i = 1; i < n; i++) {
            if (numbers[i] > largest) {
                largest = numbers[i];
            }
        }
        System.out.println("The largest number is: " + largest);
        scanner.close();
    }
}
