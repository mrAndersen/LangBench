let fs = require('fs');
let util = require('util');


let array = fs.readFileSync('../set.txt', 'utf8').split("\n");

let start = (new Date().getTime());
let j = 0;

for (let i = 0; i < array.length; i++) {
    let string = array[i];

    if (string.indexOf("abcde") !== -1) {
        j++;
    }
}

end = (new Date().getTime()) - start;
console.log(util.format("NodeJS in %sms - %s", end, j));