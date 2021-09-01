const fibo = (n) =>{
    const dp = Array(n+1).fill(0);
    dp[0] = 0;
    dp[1] = 1;
    for(let i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


console.log(fibo(6));
console.log(fibo(8));
console.log(fibo(50));
