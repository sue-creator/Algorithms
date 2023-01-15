def factorial(n):
    dp = [0]*(n+1)
    dp[0] = 1

    for i in range(1,n+1):
        dp[i] = dp[i-1] * i
    return dp[n]

k = int(input())
print(factorial(k))