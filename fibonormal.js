const fib = (n, arr = {}) =>{
  if (n in arr){
    return arr[n];
  }
  if(n <= 1){
    return n;
  }
  arr[n] = fib(n-1,arr)+ fib(n-2,arr);
  return arr[n];
}
// int arr[] = {};
console.log(fib(900));