const bestSum = (targetSum,numbers,memo={}) =>{
  if(targetSum in memo){
    return memo[targetSum];
  }
  if(targetSum < 0){
    return null;
  }
  if(targetSum === 0){
    return [];
  }
  let shortestCombination = null;
  
  for(let num of numbers){
    const remainder = targetSum - num;
    const remainderResult = bestSum(remainder,numbers,memo);
    if(remainderResult !== null){
      const combination = [ ...remainderResult, num];
      if( shortestCombination === null || combination.length < shortestCombination.length){
        shortestCombination = combination;
      }
    }
  }
  memo[targetSum] = shortestCombination;
  return shortestCombination;
}


console.log(bestSum(7,[4,3,7]));
console.log(bestSum(8,[2,4,5]));
console.log(bestSum(100,[25,4,25]));