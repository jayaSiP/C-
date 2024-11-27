import java.util.Scanner;
import java.util.ArrayList;

public class OddEvenSeparator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> oddNumbers = new ArrayList<>();
        ArrayList<Integer> evenNumbers = new ArrayList<>();

        System.out.println("Enter numbers (enter a non-integer to stop):");

        while (scanner.hasNextInt()) {
            int num = scanner.nextInt();
            if (num % 2 == 0) {
                evenNumbers.add(num);
            } else {
                oddNumbers.add(num);
            }
        }

        System.out.println("Odd Numbers: " + oddNumbers);
        System.out.println("Even Numbers: " + evenNumbers);

        scanner.close();
    }
}
