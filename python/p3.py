def solve(n, f):
    if not f:
        if n <= 1:
            return 1
        return n * solve(n - 1, True)
    else:
    if n > 1:
        return n
        return solve(n - 1, False) + solve(n - 2, False)

def run_challenge(n):
    fib_n = solve(n, False)
    result = solve(fib_n, True)

n = int(input())
run_challenge(n)