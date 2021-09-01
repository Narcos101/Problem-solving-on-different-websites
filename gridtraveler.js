const gridTraveller = (n,m) =>{
    if(n === 1 && m == 1){
        return 1;
    }
    if(n === 0 || m === 0){
        return 0;
    }
    return gridTraveller(n-1,m) + gridTraveller(m-1+n);
}

console.log(gridTraveller(3,3));
console.log(gridTraveller(2,3));
console.log(gridTraveller(6,6));
console.log(gridTraveller(18,18));