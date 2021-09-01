const cansum = (targetsum,arr) =>{
  if(targetsum === 0) return true;
  if(targetsum < 0) return false;
  for(let x of arr){
    let remainder = targetsum - x;
    if(cansum(remainder,arr) === true){
      return true;
    }
  }
  return false;
}


console.log(cansum(7,[5,2,7,3]));
console.log(cansum(-1,[5,2,7,3]));
console.log(cansum(2,[5,2,7,3]));
console.log(cansum(300,[7,14]));

