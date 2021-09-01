const canConstruct = (target,wordbank) =>{
    if(target === '') return true;
    
    for(let word of wordbank){
        if(target.indexOf(word) === 0){
            const suffix = target.slice(word.length);
            if(canConstruct(suffix,wordbank) === true){
                return true;
            }
        }
    }


    return false;
}

console.log(canConstruct("abcdef",["abc","def",'a','b','c','d','e','a']));
console.log(canConstruct('aaaaa',['z','zz','z','z','z']));
console.log(canConstruct('eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef',['e','eeeee','ee','eeeeeeeee','eeee']));