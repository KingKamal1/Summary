window.alert("message"); // to make an alert
window.confirm("are you sure?"); // to make a confirm
window.close(); // close the window that were opened by open method
window.open(url, target, windowFeatures); // open a new tab in the browser
window.print(); // print the current page
// =================================================================
document.write("<p>hello from a paragraph</p>"); // write a content in the page
// =================================================================
/* the console is a web api not a javascript method */
// print a message in the console
console.log("hello from js");
// print an error message in the console
console.error("Error");
// to make a table of contents in the console
console.table(
  "1th element",
  "2th element",
  "3th element",
  "4th element",
  "5th element"
);
// to style a message in the console
console.log(
  "hello from %cJS %cfile",
  "color:blue; font-size:40px;",
  "color:red; font-weight:bold;"
);
// =================================================================
/* ECMAScript ES6 */
// the general standards in javascript
// =================================================================
// Data types
console.log(typeof "Str"); // string
console.log(typeof 1000); // number
console.log(typeof 100.75); // decimal number
console.log(typeof [1, 2, 3, 4]); // object
console.log(typeof true); // boolean
// =================================================================
/* Variables */
/*
  var
    redeclare                   yes
    access before declaration   undefined
    variable scope              window object
  let
    redeclare                   no
    access before declaration   error
    variable scope              memory object
  const
    redeclare                   no
    access before declaration   error
    variable scope              memory object
*/
var VarName1 = "value";
let VarName2 = "value";
const VarName3 = "value";
// =================================================================
/* String */
console.log("Elzero Web 'School'"); // Elzero Web 'School'
console.log('Elzero Web "School"'); // Elzero Web "School"
/*
  \n => new line
  \t => click tab
  \\ => \
*/
/*
  split negative value at start or end start counting from the end
  substring negative value is considered as 0 and if you put start in place of end , it will swap them and make a normal string
  substr negative value is counted from the end and it takes the number of characters you want
  ===============================
  includes search if the value is exist in the variable
  startsWith search if the value is a start of a word in the variable
  endsWith search if the value is an end of a word in the variable
  ===============================
  to return an array from a string you can do this [  variable.split("");  ]
*/
variable = "  Kamal  ";
variable[index]; // return the character in equal to index
variable.charAt(index); // return the character in equal to index
variable.length(); // return the length of the variable
variable.trim(); // to cut the space after and before the variable
variable.toUpperCase(); // return the upper case of the variable
variable.toLowerCase(); // return the lower case of the variable
variable.method1().method2().method3(); // return the value of variable after passing the methods in order 1 => 2 => 3
variable.indexOf(value, start); // return the index of the value in the variable
variable.lastIndexOf(value, start); // return the index of the value in the variable but it start searching from behind
variable.slice(start, end); // return a cut of the variable with the start and end indexes from the variable (not including end)
variable.repeat(times); // repeat the variable number of times
variable.split(sign, times); // when you arrive the sign cut and consider as element in the array , how many times it will cut or split
variable.substring(start, end); // make a new string that starts from the start and ends at the end (not including end)
variable.substr(start, nums); // make a new string that starts from the start and ends with the number of characters you want
variable.includes(value, start); // search if the value is in the variable
variable.startsWith(value, start); // search if the value in the variable is at the start of some independent string
variable.endsWith(value, start); // search if the value in the variable is at the end of some independent string
variable.replace("searchValue", "theNewValue"); // change the first search result with the new value
variable.replaceAll("searchValue", "theNewValue"); // change all search results with the new value
// =================================================================
/* Number */
/* variable.function(); , (variable).function(); , variable..function; */
variable.toString(); // return a string from a variable
variable.toFixed(2); // return a string of decimal number with the specified number of digits
parseInt(variable); // return a number
parseFloat(variable); // return a decimal number
Number.isInteger(variable); // return true if the variable is an integer
// =================================================================
/* Concatenate */
let a = "we love";
let b = "Javascript";
let c = "and";
let d = "Programming";
console.log(a + " " + b + " " + c + " " + d);
console.log(`${a} ${b} ${c} ${d}`);
// =================================================================
/* Arithmatic operators */
console.log(10 + 2); // 12
console.log(10 - 2); // 8
console.log(10 * 2); // 20
console.log(10 / 2); // 5
console.log(10 ** 2); // 100
console.log(10 % 2); // 0
/* 
=   => assignment operator
==  => compare value only not type
=== => compare value and type
>   => larger than comparison
<   => smaller than comparison
*/
// =================================================================
/* Converting */
console.log(+100); // 100
console.log(+"100"); // 100
console.log(+"-100"); // -100
console.log(-100); // -100
console.log(-"100"); // -100
console.log(-"-100"); // 100
// =================================================================
/* Syntactic sugar */
console.log(1000000); // 1000000
console.log(1_000_0000); // 1000000
console.log(1e6); // 1000000
console.log(10 ** 6); // 1000000
// =================================================================
/* Math object */
console.log(Math.round(value)); // round the value to the nearest integer
console.log(Math.ceil(value)); // round the value to the nearest big integer
console.log(Math.floor(value)); // round the value to the nearest small integer
console.log(Math.min(array)); // the minimum value in the array
console.log(Math.max(array)); // the maximum value in the array
console.log(Math.pow(var1, var2)); // var1 power to var2
console.log(Math.random()); // return a random number
console.log(Math.trunc(value)); // cut the integer value in the integer
// =================================================================
/* Conditions */
// ====================
if (condition) {
  // orders
} else if (condition) {
  // orders
} else {
  // orders
}
/* if ternary // condition? if true : if false ; */
condition ? true : false;
// ====================
switch (variable) {
  case value1:
    // orders
    break;
  case value2:
    // orders
    break;
  case value3:
    // orders
    break;
  default:
  // orders
}
// =================================================================
/* alternative value */
let price = 50;
`the price is ${price || 100} pounds`;
/*
  ---these operators return the another value if the variable value is some of the next
  || => if the variable value is null or undefined or falsy value like 0 or ""
  ?? => if the variable value is null or undefined
*/
// =================================================================
/* Array */
// creating a new array
let myArray = ["element1", "element2", "element3", "element4", "element5"];
// accessing an element
myArray[index];
// nested array
let nestedArray = [
  "element1",
  "element2",
  "element3",
  "element4",
  [1, 2, 3, 4, ["a", "b", "c", "d", [true, false]]],
];
// check if the object is an array
Array.isArray(myArray);
// make an array from itrator
Array.from("12345", function (n) {
  return +n + +n;
});
// copy part of your array in the same array and keeps the same size
let Arr = [1, 2, 3, 4, 5, "a", "b"];
Arr.copyWithin(target, start, end); //(3,0,7) => copy starting with the target and the copy context is start with start and end with end
// some
// this function returns true or false in condition one item successed and thisArgument refer to what this keyword will refer to
myArray.some(function (e) {
  return e > this;
}, thisArgument);
// every
// this function returns true or false in condition all items successed and thisArgument refer to what this keyword will refer to
myArray.every(function (e) {
  return e > this;
}, thisArgument);
// methods
myArray.length; // returns the number of elements in the array
myArray.unshift(value1, value2, value3); // add elements to the start of the array
myArray.push(value1, value2, value3); // add elements to the end of the array
myArray.shift(); // remove the first element from the array and return its value
myArray.pop(); // remove the last element from the array and return its value
myArray.indexOf(item, start); // search for an item in the array and starts from the start variable and it returns the index of the item
myArray.lastIndexOf(item, end); // search for an item in the array and ends at the end variable and it returns the index of the item
myArray.includes(item, start); // search for an item in the array and starts from the start variable and it returns true or false
myArray.sort(); // sort the array
myArray.reverse(); // reverse the array
myArray.slice(start, end); // make a copy of the array that starts from the start and ends at the end (not including end)
myArray.splice(start, delCount, value1, value2); // starts from the start then delete with the number of delCount then add the values
myArray.concat(nestedArray); // create a new array that mix the two arrays
myArray.join(sperator); // returns a string of all elements in the array sperated by the sperator you define
// =================================================================
/* Loops */
// ===================
for (intialize; condition; disableCondition) {
  // orders
}
// ===================
while (condition) {
  // orders
}
// ===================
do {
  // orders
} while (condition);
// =================================================================
/* Function */
// ======================
// normal funciton
function functionName(parameter) {
  // orders
}
// to take unlimited parameters
function func(...parameters) {
  // now parameters is an array
  console.log(Array.isArray(parameters));
}
// ======================
// Anonymous function
let funcVar = function (...args) {
  // orders
};
// ======================
// Arrow function
() => {
  // orders
};
// =================================================================
/* Higher Order Functions */
// ======================
// Map
let myNums = [1, 2, 3, 4, 5];
let myNewArray = myNums.map(function (element, index, array) {
  /* 
    element => the current element that is processed in the operation
    index   => the current index of the element that is processed in the operation
    array   => the current array that you are dealing with
  */
  // to make an operation to each element in the array
  return element + element;
}, this);
// myNewArray = [ 2 , 4 , 6 , 8 , 10 ]
// ======================
// Filter
let my_nums = [1, 2, 3, 4, 5];
let my_new_nums = my_nums.filter(function (element, index, array) {
  // if the element passed the test so it will be add
  if (element > 3) return true;
  else return false;
}, this);
// my_new_nums = [ 4 , 5 ]
// ======================
// Reduce
let nums = [10, 20, 30, 40, 50];
let result = nums.reduce(function (accumulator, currentVal, index, array) {
  /*
    acumulator  => the first element and the full result in the process
    currentVal  => the current element which is processed in the operation
  */
  // reduce the elements to one result
  return accumulator + currentVal;
}, intialValue);
// if you put intial value the accumulator will be the intial value
// ======================
// For each
let allLis = [nums, result, myArray];
allLis.forEach(function (element) {
  // at each element it do an operation
  element.push(15);
});
// =================================================================
/* Object */
let objectName = {
  // properties
  name: "kamal",
  age: 19,
  skills: ["HTML", "CSS", "JavaScript"],
  avaliable: true,
  address: {
    ksa: "Riyadh",
    egy: {
      first: "Cairo",
      second: "Qalubia",
    },
  },
  // methods
  funcName: function () {
    console.log("hello world!");
  },
};
// accessing the values
console.log(objectName.key1);
console.log(objectName["key2"]);
console.log(objectName.skills[index]);
console.log(objectName["avaliable"]);
console.log(objectName.address.egy.first);
console.log(objectName["address"]["egy"]["second"]);
// create a new object and adding properties and methods to it
let user1 = {}; // first way
let user2 = new Object(); // second way
user.prop1 = "value1";
user["prop2"] = "value2";
user.funcName = function () {
  console.log("Hello World!");
};
// ==========================
// to deal with a list of objects
let my_DEV = document.querySelector(".div");
my_DEV.classList.contains("className"); // check if the element contains this class name
my_DEV.classList.item("index"); // return the class of this index
my_DEV.classList.add("className1", "className2", "className3"); // add this classes to the element
my_DEV.classList.toggle("classNameExisted", "classNameNotExisted"); // add if doesn't exist remove if existed
my_DEV.classList.remove("className"); // to remove a class from the element
// ==========================
// to create a new object that is related to an old one you can do the next
// if you deleted the old object , the copy object will lose its properties that it inherited from the old one
let obj = { age: 10, waiting: true };
let copyObj = Object.create(obj); // the propreties here can be accessed from the __proto__ proprety
console.log(copyObj);
console.log(copyObj.__proto__.age);
// =========================
let obj1 = {
  prop1: "value1",
  method1: function () {
    console.log("Hello World 1");
  },
};
let obj2 = {
  prop2: "value2",
  method2: function () {
    console.log("Hello World 2");
  },
};
let targetObj = {
  prop3: "value3",
  method3: function () {
    console.log("Hello World 3");
  },
};
let newObj = Object.assign(targetObj, obj1, obj2); // all properties are added to the target and the target is assigned to the new object
// =================================================================
/* Map Object */
let mapOb = new Map([
  [key1, value1],
  [key2, value2],
  [key3, value3],
]);
mapOb.set(key, value); // setting a key and a value for the map
mapOb.get(key); // return teh value of the key
mapOb.delete(key); // delete the key and its value and return true if deleted false if not
mapOb.clear(); // delete all elements
mapOb.size; // return the size of the map
mapOb.has(key); // return true if exist false if not
// =================================================================
/*
  This keyword
//===============
    -- if in global then it refer to the window
    -- if in a function in the global then it refer to the window too
    -- if in a function that was created for an element in the document then it refer to that element
    -- if in a function that was created in an object then it refer to that object
  // =====================================
  // The performance of the this keyword in strict mode is generally slower than in non-strict mode. 
  // This is because strict mode forces the this keyword to refer to the global object by default,
  // unless it is explicitly bound to another object. This means that 
  // the JavaScript engine has to do more work to track the value of this in strict mode, which can slow down execution.
*/
let ob = {
  prop1: "value1",
  prop2: "value2",
  check: function () {
    console.log(this.prop1);
  },
};
// =================================================================
/* DOM */
// -- is an object that represent all the elements in the document and allow to access them
let element_Id = document.getElementById("id"); // return one element that you can access easily
let element_tag = document.getElementsByTagName("div"); // return an array of elements that has this tag name
let element_class = document.getElementsByClassName("className"); // return an array of elements that has this class name
let element_everything = document.querySelector("css specification"); // return an element that CSS selectors
let elements_everything = document.querySelectorAll("css specification"); // return an array of elements that contain CSS selectors
document.title; // return the title of the page
document.body; // return the body of the page
document.forms; // return an array of all forms in the page
document.images; // return an array of all images in the page
document.links; // return an array of all links in the page
// =================================================================
/*
  -- innerHTML    => return the html of the element
  -- textContent  => return the pure text of the element without no aware of <tag>
  -- innerText    => return the pure text of the element with aware of <tag>
*/
let myElement = document.getElementById("id");
console.log(myElement.innerHTML);
console.log(myElement.textContent);
myElement.innerHTML = "Text From <span>Main.js</span> File"; // return "Text From " <span> Main.js </span> " File"
myElement.textContent = "Text From <span>Main.js</span> File"; // return "Text From <span>Main.js</span> File"
// =================================================================
myEle = document.getElementById("id");
// Edit Attributes
myEle.className = "className";
myEle.src = "https://link.source/";
myEle.getAttribute("attrName"); // get the value of the attribute
myEle.setAttribute("attrName", "attrValue"); // set the value of the attribute
myEle.removeAttribute("attrName"); // delete the attribute from the element
// Check Attributes
myEle.attributes; // return all the attributes of the element
myEle.hasAttribute("attrName"); // return true or false ups to existing of the attribute
// =================================================================
/* Creating and Appending Elements in the document */
let my_element = document.createElement("tagName"); // add tag name for example div p img video form button
let my_attribute = document.createAttribute("attrName"); // make an attribute that is not exist for the element by default
my_element.className = "class_name"; // add class name to the element
my_element.setAttributeNode(my_attribute); // add that attribute to use later and may change its value later
document.body.appendChild(my_element); // add this element to the page
// =================================================================
/*
  Events
    -- onclick        => when you click it does the function
    -- oncontextmenu  => when you click right click it does a function
    -- onmouseenter   => when the mouse enter the space of the element it does a specified function
    -- onmouseleave   => when the mouse leave the space of the element it does a specified function
    -- onscroll       => when you scroll in the page it does a specified function
    -- onload         => when the page is loaded do some function
    -- onfocus        => when you enter a field of writing it does a specified function
    -- onblur         => when you leave a field of writing it does a specified function
    -- onsubmit       => when you click submit do a specified function
*/
let button = document.getElementById("btn");
button.onclick = function () {
  console.log("Clicked");
};
// ==================================================================
// to make some events happen automatically
let field = document.querySelector("className");
window.onload = function () {
  field.focus(); // when the window is loaded automatically focus in the field
};
// ==================================================================
/* Change Css */
let my_Element = document.getElementById(".dev");
// to add propreties
my_Element.style.color = "red";
my_Element.style.fontWeight = "bold";
my_Element.style.cssText = "font-weight:bold; color:red;";
my_Element.style.setProperty("font-size", "50px", "important");
// to remove propreties
my_Element.style.removeProperty("color");
// =============================
// to make the changes in the style sheet itself
// rules means the block of propreties which you write in the css
document.styleSheets[index].rules[index].style.setProperty(
  "propretyName",
  "value",
  "importance"
);
// ==================================================================
// adding element in the document
let the_Main_element = document.querySelector(".element");
let createdElement = document.createElement("p");
the_Main_element.after(createdElement); // add the created element after the main element itself
the_Main_element.before(createdElement); // add the created element before the main element itself
the_Main_element.insertBefore(createdElement, the_Main_element.firstChild); // add the created element before the main element first node
the_Main_element.insertAfter(createdElement, the_Main_element.lastChild); // add the created element after the main element last node
// insertBefore/After is more specific than Before/After
the_Main_element.append(createdElement); // add the created element at the end of the main element itself from (inside)
the_Main_element.prepend(createdElement); // add the created element at the beginning of the main elment itself from (inside)
// ==================================================================
// removing element in the document
parentElement.removeChild(wantedChild);
// ==================================================================
/* Traversing in the document */
let element = document.getElementById("id");
element.nextSibling; // next thing after the element whatever it is a comment , text , span , paragraph...etc
element.nextElementSibling; // next element after the element itself like p , span...etc
element.previousSibling; // the thing before the element whatever it is a comment , text , span , paragraph...etc
element.previousElementSibling; // the element before the element itself like p , span...etc
element.parentElement; // the parent of this element
// ==================================================================
// to make copy of element
// deep clean if true then it will copy everything whatever it is attributes or ides or classes if not just the content
let myP = document.querySelector("p").cloneNode(deep);
// don't forget to change the id after cloning
// ==================================================================
/* addEventListener */
// from the onclick it does one function , and needs the element to be exist
element.onclick = function () {
  console.log("from onclick");
};
// addEventListener does more than one function , and doesn't need the element to be exist
// on the click it will does both of these functions
element.addEventListener("click", function () {
  console.log("from function one");
});
element.addEventListener("click", function () {
  console.log("from function two");
});
// ==================================================================
/* Time */
// ==============================
// Setting timeout => for one time
// you can write the set time function without a handler
let handlerId1 = setTimeout(
  function () {
    console.log("message");
  },
  timeByMeliSecond,
  argsForFunction
);
// clearing the timeout
clearTimeout(handlerId1);
// ==============================
// Setting timeout => for infinite times
// you can write the set time function without a handler
let handlerId2 = setInterval(
  function () {
    console.log("message");
  },
  timeByMeliSecond,
  argsForFunction
);
// clearing the timeout
clearInterval(handlerId2);
// ==================================================================
/* Location */
console.log(location.href); // the address of the web you are currently in (history is saved in the browser)
console.log(location.host); // return the web address elzero.org
console.log(location.hostname); // return the web address camp.elzero.org
console.log(location.protocol); // return the protocol of the website (https: / http:)
console.log(location.reload); // do a reload
console.log(location.replace(url)); // remove the current page from the history
console.log(location.assign(url)); // turn to another website
// ==================================================================
console.log(history.length); // return the number of pages saved in the browser
console.log(history.back()); // back to the previous page
console.log(history.forward()); // back to the forward page
console.log(history.go(steps)); // if you wrote 0 then move 0 if 1 then move one tab to forward if -1 then move one tab to back
// ==================================================================
/* Local Storage */
// storage for everytime you open the browser
// creating a value
localStorage.setItem("key", "value");
localStorage.key = "value";
localStorage["key"] = "value";
// getting the value
localStorage.getItem("key");
localStorage.key;
localStorage["key"];
// remove element
localStorage.removeItem("key"); // remove one element
localStorage.clear(); // clear all
// ===================================================================
/* Session storage */
// storage but for one session
// creating a value
sessionStorage.setItem("key", "value");
sessionStorage.key = "value";
sessionStorage["key"] = "value";
// getting the value
sessionStorage.getItem("key");
sessionStorage.key;
sessionStorage["key"];
// remove element
sessionStorage.removeItem("key"); // remove one element
sessionStorage.clear(); // clear all
// ===================================================================
/* Destructuring */
// =====================
// with an array
// =====================
let myFriends = ["Kerolos", "Mohamed", "Adham", "Ahmed"];
let [e1, e2, e3, e4] = myFriends;
// now e1 = kerolos | e2 = mohamed | e3 = adham | e4 = ahmed
myFriends = ["kerolos", "omar", "mohamed", ["ahmed", "sayed", ["ali", "adel"]]];
[, , e1, [, e2, [e3, e4]]];
// now e1 = mohamed | e2 = sayed | e3 = ali | e4 = adel
let v1 = "value1",
  v2 = "value2";
[v1, v2] = [v2, v1];
// swapping values by destructuring
// =====================
// with an object
// =====================
let user = {
  Name: "kamal",
  Age: 19,
  Title: "developer and ai engineer",
  Country: "egypt",
};
// if it didn't work try this ( { element1 , element2 , element3 , element4 } = object )
let { Name: newName1, Age, Title: newName2, Country } = user;
// ===================================================================
/* Set */
let myData = [1, 1, 1, 2, 2, 3];
let myUniqueData = new Set(myData); // equal to [1,2,3]
myUniqueData.add(value); // adding a value to the set
myUniqueData.remove(value); // remove a value from the set and return true if it deleted the value but if it didn't it return false
myUniqueData.clear(); // clear all values in the variable
myUniqueData.has(value); // search for this value
// ===================================================================
/* Map && Object comparison */
// Object
let myObject = {
  10: "Number",
  10: "String", // it will update the value of the 10
};
// Map
let myMap = new Map();
myMap.set(10, "Number");
myMap.set("10", "String"); // it will not update and it will create two keys one 10 and another "10"
// ===================================================================
/* Spread */
// case 1
function functionName(...args) {
  let result = 0;
  for (let i = 0; i < args.length; i++) {
    result += args[i];
  }
}
// case 2
[..."Some String"]; // return an array composed from each letter in this string
// case 3
let objOne = {
  a: 1,
  b: 2,
};
let objTwo = {
  c: 3,
  d: 4,
};
let allObj = { ...objOne, ...objTwo, e: 5, f: 6 };
// ===================================================================
/* Regular expression */
/*
  i     => case insensitive
  g     => global
  m     => multilines
  (x|y) => x or y
  [0-9] => range from 0 to 9
  ^     => not
  [a-z] => a to z small
  [A-Z] => A to Z capital
  .     => match any character except new line terminator (\n)
  \w    => character or number capital or small and underscore
  \W    => the opposite of \w (special characters)
  \d    => digit from 0 to 9
  \D    => not digit from 0 to 9
  \s    => whitespace
  \S    => non whitespce character
  \b    => start or end with this word (start if you wrote \bWord | end if you wrote Word\b)
  \B    => not in the start or the end
  +     => one or more character        n+
  *     => zero or more character       n*
  ?     => zero or one character        n?
  {x}   => number of times              n{x}
  {x,y} => range from x to y times      n{x,y}
  {x,}  => at least x of times          n{x,}
  $     => end with something           n$  (it is part from the word itself)
  ^     => start with something         ^n  (it is part from the word itself)
  ?=    => followed by something        ?=n (not from the word itself)
  ?!    => not followed by something    ?!n (not from the word itself)
*/
let Url1 =
  "https://www.google.com http://www.google.com https://www.google.com/ http://www.google.com/\
          www.google.com www.google.com/ google.com google.com/";
let Url2 =
  "https://www.elzero.org http://www.elzero.org https://www.elzero.org/ http://www.elzero.org/\
          www.elzero.org www.elzero.org/ elzero.org elzero.org/";
let regEx = /(https?:\/\/)?(www.)?\w+.(com|net|org|edu|eg)\/?/gim;
console.log(Url1.match(regEx));
console.log(Url2.match(regEx));
// ====================================================================
/* Constructor Function */
// new syntax
class User1 {
  constructor(id, username, salary) {
    // here this refer to the object
    // propreties
    this.id = id;
    this.username = username;
    this.salary = salary;
    this.msg = function () {
      return `Hello From ${this.username} my ID is ${this.id}`;
    };
  }
  // methods
  writeMsg() {
    console.log(`Hello From ${this.username} my ID is ${this.id}`);
  }
}
// simple syntax
function User2(id, username, salary) {
  // here this refer to the object
  this.id = id;
  this.username = username;
  this.salary = salary;
}
// creating object from class
let userOne = new User1(445247708, "kamal sayed", 10000); // object from the class
let userTwo = new User2(2022393, "kamal sayed", 100000); // object from the class
console.log(userOne instanceof User1); // is this object a child from class user1
console.log(userTwo instanceof User2); // is this object a child from class user2
// if you added a proprety with the type static it will be accessed by the class not the object
class ClassName {
  static count = 0;
  constructor() {
    // propreties
  }
}
// ==================================
// inheritance
class Parent {
  constructor(prop1, prop2) {
    this.prop1 = prop1;
    this.prop2 = prop2;
  }
}
class Inherited extends Parent {
  constructor(prop1, prop2, prop3) {
    super(prop1, prop2);
    this.prop3 = prop3;
  }
}
// ===================================
// private proprety
class Class {
  #prop;
  constructor(...args) {
    this.#prop = args[0];
  }
}
// ====================================================================
let object = {
  a: 1,
  b: 2,
};
// adding a proprety to an object
Object.defineProperty(object, "propretyName", {
  writable: true, // if false then you can't edit the value after initializing
  enumerable: true, // if false then you skip it in any kind of looping
  configurable: true, // if false then you can't delete or edit the proprety
  value: 3,
});
// adding propreties to an object
Object.defineProperties(object, {
  propName1: {
    writable: true,
    enumerable: true,
    configurable: true,
    value: 3,
  },
  propName2: {
    writable: true,
    enumerable: true,
    configurable: true,
    value: 4,
  },
});
// to get the describe of the proprety
Object.getOwnPropertyDescriptor(object, propName);
// ====================================================================
// loop in object or maybe array and others
for (let i in object) {
  console.log(i, object[i]);
}
// ====================================================================
/* Date and Time */
let dateNow = new Date();
// ==============================
// getting the date or the time
// ==============================
Date.now(); // returns the meliseconds from 1 junary 1970
dateNow.getTime(); // returns the meliseconds from 1 junary 1970
dateNow.getDate(); // the number of day in the month
dateNow.getFullYear(); // the number of the this year
dateNow.getMonth(); // return the number of month -but by the index (starting by 0)
dateNow.getDay(); // the number of day in the week -but by the index (starting by 0)
dateNow.getHours(); // return the hour
dateNow.getMinutes(); // return the minute
dateNow.getSeconds(); // return the second
// ==============================
// setting the date and time
// ==============================
dateNow.setTime(0); // now the time is 1 junary 1970 (zero second passed from 1 junary 1970)
dateNow.setDate(1); // now the time is 1 in the month but the month and the year is okay
dateNow.setFullYear(2020, 1, 15); // now the year is 2020 / 1 / 15
// ====================================================================
// Generative Function
function* generateNumbers() {
  yield 1;
  alert("Hello after Yield1");
  yield 2;
  alert("Hello after Yield1");
  yield 3;
  alert("Hello after Yield1");
  yield 4;
  alert("Hello after Yield1");
  yield 5;
  alert("Hello after Yield1");
}
let generator = generateNumbers();
generator.next(); // start with steps
// generative function is a function that is used in steps which is yield
// each yield is done once and go to the next
// if you looped all the yields then it will not be able to be looped again
// =======================
// Delegate Generator
function* generateNums() {
  yield 1;
  yield 2;
  yield 3;
}
function* generateLetters() {
  yield "A";
  yield "B";
  yield "C";
}
function* generateAll() {
  yield* generateNums();
  yield* generateLetters();
  yield* [4, 5, 6];
}
let gen = generateAll();
// ====================================================================
/* Import and Export Modules */
// ========================
// the sender
export let variable = 10;
export let array = [1, 2, 3, 4];
export function saySomething() {
  return `Something`;
}
// or
export { variable, array, saySomething };
// default export is written once and can be imported by any name
export default function someName() {
  return "this is a default export";
}
// ========================
// the reciever
// you can rename it or just leave it as it is , the default export can be named anything as it is defined only one time
import defaultExportName, {
  variable as new_name1,
  array,
  saySomething as new_name2,
} from "link of the file";
// ================================================
// import all at once
import * as all from "link of the file";
// to use them use this
all.vairable;
all.array;
all.default;
all.saySomething();
// ====================================================================
/* JSON */
/*
      {
        "key1" : "value",
        "key2" : 1000000,
        "key3" : {
          "sub_key1" : true,
          "sub_key2" : false,
        }
        "key4" : [1,2,3,4,5],
        "key5" : ["value1","value2","value3"],
        "key6" : null,
      }
*/
let myJson = ' "username" : "kamal" , "age" : 20 '; // the json file is consider as a string in js
let myObj = JSON.parse(myJson); // convert json file into object file
myObj["username"] = "Elzero"; // change the username
myObj["age"] = 40; // change the age
let myJsonAfterEditing = JSON.stringify(myObj); // convert the object file into json file
console.log(myJsonAfterEditing); // printing the json after editing in the console
// ====================================================
/* Asynchronous && Synchronous */

// ============
// synchronous  => in series with no paralizing
// asynchronous => in multiaction verse
// ============

// synchronous
console.log(1);
console.log(2);
window.alert("Operation");
console.log(3);
console.log(4);
// 1 2 wainting_the_alert 3 4

//========================

// asynchronous
console.log(1);
console.log(2);
setTimeout(() => {
  window.alert("Operation");
}, 4000);
console.log(3);
console.log(4);
// 1 2 3 | in other hand the alert will appear after 4 seconds what ever has happened
// =====================================================
/* AJAX */
let myRequest = new XMLHttpRequest();
/*
GET   => it show the data in link
POST  => it hidde the data from the link
aync  => if false then all your requests will stay until this request send a response
*/
myRequest.open(
  "GET",
  "https://api.github.com/users/elzerowebschool/repos",
  asyncState_true_or_false
); // get data from api
myRequest.send(); // send the data to the web page
/*
  ready state
    0   => not initialized
    1   => server connection established
    2   => request received
    3   => processing request
    4   => request is finished
  status
    200 => successfully done
    404 => page not found
    301 => moved permanently
    306 => no longer used
    402 => payment required
    403 => no access to reach this page
    408 => time finished
    429 => too many requests were sent
*/
myRequest.onreadystatechange = function () {
  // the ready state change in 5 stages 0 , 1 , 2 , 3 , 4
  console.log(myRequest.readyState); // show number of ready state [ 0 , 1 , 2 , 3 , 4 ]
  console.log(myRequest.status); // show how does fetching the data went [ 200 , 404 , 504 , ... ]
};
myRequest.responseText; // return the response of the request
// ========================================
/* Promise */
// first it take two variables that store the data
// if the operation fulfilled then you must store the data in resolve
// if the operation failed then you must store the data in reject
// after storing in some variable the promise goes to then function
// in then function it takes two variables the first one will store the data if the operation successed in promise
// the second one will store the data if the operation failed in the promise
// in then function after storing data it does the function that its variable has stored the data
// =============
// Example:
// in the next example it will see if the connection is exist or not
// if the connection is exist then it will do something and store the data at the first parameter (resolve_1)
// if the connection is not exist then it will do something and store the data at the second parameter (reject_1)
// after storing the data at some parameter it will go to then function
// at then function it will see if it recieved the first parameter from the promise which is the resolve_1 then it
// will do the first function but if it recieved the second parameter from the promise which is the reject_1 then it
// will do the second function and the (resolve_2 and reject_2) in the then function are the parameters that store the data
// from the (resolve_1 and reject_1) which came from the promise and it store them as known (resolve_1 to resolve_2) or (reject_1 to reject_2)
// if the promise failed some way and returned reject value you can add a general reject value that do something when the promise fail
// and this is written in catch method , the finally method is a function that is executed whatever the promise successed or failed
// =============
let myPromise = new Promise(function (resolve_1, reject_1) {
  let connect = true;
  if (connect) {
    resolve_1 = "connection established";
  } else {
    reject_1 = Error("connection failed");
  }
})
  .then(
    (resolve_2) => {
      console.log(`good request ${resolve_2}`);
    },
    (reject_2) => {
      console.log(`bad request ${reject_2}`);
    }
  )
  .catch((GeneralReject) => {
    console.log("something went wrong");
  })
  .finally(() => {
    console.log("the operation is done");
  });
// some methods of the promise
// all return resolve if all the promises returned a resolve
Promise.all([arrayOfPromises]).then(
  (resolvedValues) => {
    return resolvedValues;
  },
  (rejectedValues) => {
    console.log("rejected");
  }
);
// allSettled return the data of each promise whatever its resolved or rejected
Promise.allSettled([arrayOfPromises]).then(
  (resolvedValues) => {
    return resolvedValues;
  },
  (rejectedValues) => {
    console.log("rejected");
  }
);
// race return the first value whatever it is resolved or rejected
Promise.race([arrayOfPromises]).then(
  (resolvedValues) => {
    return resolvedValues;
  },
  (rejectedValues) => {
    console.log(rejectedValues);
  }
);
// ====================================
// Example from the real life
// ====================================
let getData = (apiLink) => {
  return new Promise((resolve, reject) => {
    let myRequest = new XMLHttpRequest();
    myRequest.onload = function () {
      if (myRequest.readyState === 4 && myRequest.status === 200) {
        resolve(JSON.parse(this.responseText));
      } else {
        reject(Error("No Data Found"));
      }
    };
    myRequest.open("GET", apiLink);
    myRequest.send();
  });
};
getData("https://api.github.com/users/elzerowebshcool/repos")
  .then((result) => {
    console.log(result);
  })
  .catch((rej) => console.log(rej));
// =======================
// cross origin api
/*
Cross-origin resource sharing (CORS) is a mechanism that allows restricted resources on a web page to be accessed 
from another domain outside the domain from which the first resource was served. A web page may freely 
embed cross-origin images, stylesheets, scripts, iframes, and videos.
*/

// api authentication
/*
API authentication is the process of verifying the identity of a user or application before allowing them to access an API.
This is done to protect the API from unauthorized access.
There are a variety of methods that can be used for API authentication, including:
  [1] Basic authentication: This is the simplest form of API authentication. It requires the user to provide a username 
      and password in the request headers.
  [2] OAuth 2.0: This is a more secure form of API authentication. It allows the user to authorize an application to
      access their account without providing their username and password.
  [3] JSON Web Tokens (JWTs): JWTs are a secure way to transmit information between a client and a server. 
      They can be used to store user credentials, session information, or other data.
*/
// ====================================================================
/* Fetch API */
fetch("link")
  .then((result) => {
    console.log(result);
    let myData = result.json(); // convert from a json to object format
    return myData;
  })
  .then((myData) => {
    console.log(myData[0].name);
  });
// =====================
// Example
// =====================

// ====================================================================
/* Async keyword Await keyword */
// The async and await keywords are used together to write asynchronous code in JavaScript.
// Asynchronous code is code that does not block the main thread while it is waiting for an operation to complete.
// The async keyword is used to mark a function as asynchronous.
// This means that the function can return a promise, which is an object that represents an asynchronous operation.
// The await keyword is used to wait for the result of a promise.
// When the await keyword is used, the execution of the current function is suspended until the promise is resolved.
// Once the promise is resolved, the value of the promise is returned to the current function.
async function getSomeData() {
  const promise = fetch("https://example.com/data");
  return await promise;
}
const data = await getSomeData();
// In this example, the getSomeData() function is marked as asynchronous using the async keyword.
// This means that the function can return a promise.
// The await keyword is used to wait for the result of the fetch() function, which returns a promise.
// Once the promise is resolved, the value of the promise is returned to the getSomeData() function.
// The async and await keywords make it easier to write asynchronous code in JavaScript.
// They allow you to write code that is more readable and maintainable,
// and they can help to improve the performance of your applications.
// ====================================================================
/*
  onclick
  - only one function
  - only one behaviour ( click )
  - can be added to html file
  addEventlistener
  - more than one function
  - more than one behaviour ( click , scroll , leave , ... )
  - can be added to element has not been created yet
  - can't be added to html file
*/
// ============================================================================
try {
  const number = 20;
  number.toUpperCase(); // this can't happen because it is a number not a string
} catch (error) {
  console.log(error instanceof TypeError); // return true if the error is from the kind TypeError
  console.log(error.message); // print the error message
}
// =============================================================================
// type of NaN
// 'number'
// type of undefined
// 'undefined'
// type of null
// 'object'
// =============================================
// NaN stands for Not a Number. It is a special value that is returned when a mathematical operation results in an undefined result,
// such as dividing by zero. NaN is also returned when trying to convert a non-numeric value to a number,
// such as converting the string "hello" to a number.
// Null is a special value that represents the absence of a value. It is often used to indicate that a variable has not been assigned a value,
// or that a function does not return a value.
// Undefined is a special value that represents a value that has not been assigned or defined.
// It is often used to indicate that a variable has not been declared, or that a property does not exist on an object.
// =============================================================================
function pascalsTriangle(n) {
  let finalArray = [1, 1, 1];
  if (n == 1) {
    return [1];
  }
  for (let i = 3; i <= n; i++) {
    let arr = [];
    arr.push(1);
    for (let j = 1; j < i - 1; j++) {
      let tempArr = finalArray.slice(-(i - 1));
      arr.push(tempArr[j - 1] + tempArr[j]);
    }
    arr.push(1);
    finalArray = finalArray.concat(arr);
  }
  return finalArray;
}
// =============================================================================
class Rectangle {
  constructor(width, height) {
    this.width = width;
    this.height = height;
  }
  // to make a check if the value of some property is correct
  set width(newWidth) {
    if (newWidth > 0) {
      this._width = newWidth;
    } else {
      console.log("width must be greater than zero");
    }
  }
  set height(newHeight) {
    if (newHeight > 0) {
      this._height = newHeight;
    } else {
      console.log("height must be greater than zero");
    }
  }
  // defining a custom way to return a value
  get width() {
    return this._width;
  }
  get height() {
    return this._height;
  }
}
// =================================================================
let array = [1,10,5,0,4,3,9];
array.sort(); // 0 1 10 3 4 5 9
array.sort(((a,b)=>{a-b})); // 0 1 3 4 5 9 10
// =================================================================
// event listeners for keyboard
// keydown => key pressed                 keyup => key released
document.addEventListener("keydown",event => {
  console.log(event.key); // key is down or pressed
});
document.addEventListener("keyup",event => {
  console.log(event.key); // key is up or released
});