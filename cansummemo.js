const cansum = (targetsum,arr,memo ={}) =>{
  if(targetsum in memo) return memo[targetsum];
  if(targetsum === 0) return true;
  if(targetsum < 0) return false;
  for(let x of arr){
    let remainder = targetsum - x;
    if(cansum(remainder,arr,memo) === true){
      memo[targetsum] = true;
      return true;
    }
  }
  memo[targetsum] = false;
  return memo[targetsum];
}


console.log(cansum(7,[5,2,7,3]));
console.log(cansum(-1,[5,2,7,3]));
console.log(cansum(2,[5,2,7,3]));
console.log(cansum(300,[7,14]));

