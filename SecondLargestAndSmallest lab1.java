import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void SecondLargestAndSmallest(int[] numbers, int[] result) {
        Arrays.sort(numbers);
        int secondSmallest = Integer.MAX_VALUE;
        int secondLargest = Integer.MIN_VALUE;
        int smallest = numbers[0];
        int largest = numbers[numbers.length - 1];
        for (int num : numbers) {
            if (num > smallest) {
                secondSmallest = num;
                break;
            }
        }
        for (int i = numbers.length - 1; i >= 0; i--) {
            if (numbers[i] < largest) {
                secondLargest = numbers[i];
                break;
            }
        }
        result[0] = secondSmallest;
        result[1] = secondLargest;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of elements:");
        int n = scanner.nextInt();
        if (n < 2) {
            System.out.println("Please enter at least 2 numbers.");
            return;
        }
        int[] numbers = new int[n];
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            numbers[i] = scanner.nextInt();
        }
        int[] result = new int[2];
        findSecondLargestAndSmallest(numbers, result);
        System.out.println("The second smallest number in the list is: " + result[0]);
        System.out.println("The second largest number in the list is: " + result[1]);
        scanner.close();
    }
}
