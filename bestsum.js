const bestSum = (targetSum,numbers) =>{
  if(targetSum < 0){
    return null;
  }
  if(targetSum === 0){
    return [];
  }
  let shortestCombination = null;
  
  for(let num of numbers){
    const remainder = targetSum - num;
    const remainderResult = bestSum(remainder,numbers);
    if(remainderResult !== null){
      const combination = [ ...remainderResult, num];
      if( shortestCombination === null || combination.length < shortestCombination.length){
        shortestCombination = combination;
      }
    }
  }
  return shortestCombination;
}


console.log(bestSum(7,[4,3,7]));
console.log(bestSum(8,[2,4,5]));
console.log(bestSum(100,[2,4,5]));