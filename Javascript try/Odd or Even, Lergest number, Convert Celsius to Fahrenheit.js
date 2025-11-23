//Odd or Even number
function OddEven(num) {
  if (num % 2 == 0) {
    console.log("Even");
  } else {
    console.log("Odd");
  }
}

//Lergest number
function lergest(x, y, z) {
  if (x >= y && x >= z) {
    console.log("x is lergest");
  } else if (y >= x && y >= z) {
    console.log("y is lergest");
  } else {
    console.log("z is lergest");
  }
}

//Convert Celsius to Fahrenheit
function convert(c) {
  let cal = (9 / 5) * c + 32;
  console.log(cal);
}

OddEven(6);
lergest(30, 90, 20);
convert(100);
