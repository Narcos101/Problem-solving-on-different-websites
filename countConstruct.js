const countConstruct = (target,wordBank,memo={}) =>{
    if(target in memo) return memo[target];
    if(target === '') return 1;
    
    let wordCount = 0;
    for(let word of wordBank){
        if(target.indexOf(word) === 0){
            const count = countConstruct(target.slice(word.length),wordBank,memo);
            wordCount += count; 
        }
    }
    memo[target] = wordCount;
    return wordCount;
}


console.log(countConstruct("abcdef",["abc","def",'a','b','c','d','e']));
console.log(countConstruct('aaaaa',['z','zz','z','z','z']));
console.log(countConstruct('eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef',['e','eeeee','ee','eeeeeeeee','eeee']));