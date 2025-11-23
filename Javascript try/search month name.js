let monthnames={
    1:'january',
    2:'february',
    3:'march',
    4:'aprail',
    5:'may',
    6:'june',
    7:'july',
    8:'augest',
    9:'sep',
    10:'oct',
    11:'nov',
    12:'dec'

}

function getMonthName(monthnumber){
    return monthnames[monthnumber] || 'unknow'
}

console.log(getMonthName(1))
console.log(getMonthName(2))
console.log(getMonthName(3))
console.log(getMonthName(4))
console.log(getMonthName(5))
console.log(getMonthName(6))
console.log(getMonthName(7))
console.log(getMonthName(6))
console.log(getMonthName(9))
console.log(getMonthName(10))
console.log(getMonthName(11))
console.log(getMonthName(12))