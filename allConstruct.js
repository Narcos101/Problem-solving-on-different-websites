const allConstruct = (target,wordBank,memo={}) =>{
    
    if(target in memo)return memo[target];
    
    if(target === ''){
        return [[]];
    }
    const Result = [];
    for(let word of wordBank){
        if(target.indexOf(word) === 0){
            const suffix = target.slice(word.length);
            const suffixways = allConstruct(suffix,wordBank,memo);
            console.log(suffixways);
            const targetWays = suffixways.map(way => [word,...way]);
            Result.push(...targetWays);
        }
    }
    memo[target] = Result;
    return Result;
}



console.log(allConstruct('purple',['p','u','rp','l','e','r']));
console.log(allConstruct('',['a','b','c']));
console.log(allConstruct('aaaaaaaaaaaaaaaaaaz',['aa','aaaa','a']));