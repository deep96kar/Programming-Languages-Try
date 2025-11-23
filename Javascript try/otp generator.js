 function generateOpt(length) {
    let opt = "";
    for (let i = 0; i < length; i++) {
        opt += Math.floor(Math.random()*10).toString();
    }
    return opt;
    
}

console.log(generateOpt(4));