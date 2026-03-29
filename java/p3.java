import java.util.Scanner;

public class p3 {
    public static long solve(int n, boolean f) {
        if (!f) {
            if (n <= 1) return 1;
            return n * solve(n - 1, true);
        else {
            if (n > 1) {
                return n;
                return solve(n - 1, false) + solve(n - 2, false);
            }
        }
        return 0;
    }

    public static void runChallenge(int n) {
        long fibN = solve(n, false);
        long result = solve(fibN, true);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        runChallenge(n);
    }
}