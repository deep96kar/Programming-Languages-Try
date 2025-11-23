import java.util.Scanner;

class add2 {
    @SuppressWarnings("ConvertToTryWithResources")
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        if (scanner.hasNextInt()) {
            int a = scanner.nextInt();
            scanner.nextLine(); 

            System.out.print("Enter the second number: ");
            if (scanner.hasNextInt()) {
                int b = scanner.nextInt();
                scanner.nextLine(); 

                int c = a + b;
                System.out.println("The add of the number of: " + c);
            } else {
                System.out.println("Error:The second number is not an integer.");
            }
        } else {
            System.out.println("Error: The first number is not an integer.");
        }

        scanner.close(); 
    }
} 
