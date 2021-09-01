const canConstruct = (target,wordbank,memo={}) =>{
    if(target in memo) return memo[target];
    if(target === ''){
        return true;
    }

    for(let word of wordbank){
        if(target.indexOf(word) === 0){
            const suffix = target.slice(word.length);
            if(canConstruct(suffix,wordbank,memo) === true){
                memo[suffix] = true;
                return true;
            }
        }
    }

    memo[target] = false;
    return false;
}

console.log(canConstruct("abcdef",["abc","def",'a','b','c','d','e','a']));
console.log(canConstruct('aaaaa',['z','zz','z','z','z']));
console.log(canConstruct('eeeeeeeeeeeeasasaseeeeeeeeeeeeee',['e','eeeee','ee','eeeeeeeee','eeee']));