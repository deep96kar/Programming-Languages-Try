let text = "adnvki,djvbsbv";
let part = text.substring(6, -8);
console.log(part);
console.log(text.slice(7, 10)); // first number er index 0 theke start hoi tai yekhan theke start hobe sei khan dheke, ar last number er index ta 1 number extre hobe.
console.log(text.slice(7, -4)); // eta last number ta last theke start hobe ar index normal means->1,2,3,4

let num = [1, 32, 165, 4, 4, 4, 9, 6, 49, 4, 94, 94, 146, 49, 4, 9];
console.log(num.length);//len er index 1 theke start hoi

for (const i of num) { // forOf loop arr er jono use hoi
  console.log(i.toString()); // toString ta number theke string e convert kore 
}

let text2 = "deep";
let text3 = "5";
let text4 = "    deep           ";
let text5 = text4.trim(); // trim ta console lekhle error debe tai trim ta ekta variable e lekh te hobe

console.log(text2.repeat(2)); // repeat mane repeat kore dibe ar only use string letter and number
console.log(text3.padStart(4, "x")); // padStart string er age add korbe ar etar index 0 theke use only string number
console.log(text3.padEnd(4, "0")); // padEnd string er last ye add hobe ar etar index 0 theke only use string number
console.log(text4.length);
console.log(text5.length);
console.log(text2.charAt(0))//charAt string er index hisabe print kore
console.log(text2.at(0))//at tai same
console.log(text2[0])//eta oo same
console.log(text2.charCodeAt(0)) //charCodeAt string letter er number deo 
console.log(text2.concat("",text4)) //concat two string ke ek sathe add kore ar number ke add kore na
console.log(text2.concat("",text5))
