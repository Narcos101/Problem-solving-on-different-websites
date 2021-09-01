const howSum  = (targetSum, nums,memo={}) =>{
  if(targetSum in memo){
    return memo[targetSum];
  }
  if(targetSum < 0){
    return null;
  }
  if(targetSum === 0){
    return [];
  }
  
  for(let num of nums){
    const remainder = targetSum - num;
    const remainderResult = howSum(remainder,nums,memo);
    if(remainderResult !== null){
      memo[targetSum] =  [ ...remainderResult,num];
      return memo[targetSum];
    }
  }
  memo[targetSum] = null;
  return null;
}


console.log(howSum(7,[4,3,1]));