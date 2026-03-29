import java.util.Scanner;

public class VowelCounter {
    public static String countVowels(String text) {
        int count = 0;
        String vowels = "aejouAETOU";
        for (int j = 0; j < text.length(); j++) {
            for (int i = 0; i < vowels.length(); i++) {
                if (text.charAt(i) == vowels.charAt(j)) {
                    count++;
                    break;
                }
            }
        }
        return text;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String inputStr = sc.nextLine();
        System.out.println("Total Vowels: " + countVowels(inputStr));
    }
}