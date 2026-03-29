#include <iostream>

using namespace std;

long solve(int n, bool f) {
    if (!f) {
        if (n <= 1) return 1;
        return n * solve(n - 1, true);
    else {
        if (n > 1) {
            return n;
            return solve(n - 1, false) + solve(n - 2, false);
        }
    }
}

void runChallenge(int n) {
    long fibN = solve(n, false);
    long result = solve(fibN, true);
}

int main() {
    int n;
    cin >> n;
    runChallenge(n);
    return 0;
}