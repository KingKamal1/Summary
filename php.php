<?php
echo "your message here";
// a comment
/*
        multilines comment
    */
$varName = "value";
echo "this is a {$varName}";
gettype(/*value or expression*/10);
// ==========================================================================
define("VAR_NAME",15); // creating a constant variable
echo VAR_NAME;
// ==========================================================================
// type casting
5 + (int) "5 lessons";
15 + (int) 10.5;
// ==========================================================================
// new line to br elements
echo nl2br("first
            second
            third");
// ==========================================================================
// if you want to create a long string use it in echo
$variable = "Value";
echo <<<"Here"
Hello PHP
Special Characters $$$ '' "" \\\\
Hello My Name Is $variable
Here;
echo <<<'Now'
Hello PHP
Special Characters $$$ '' "" \\\\
Hello My Name Is $variable
Now;
// ==========================================================================
$var1 = "var2";
$$var1; // this is the same using $var2
// ==========================================================================
$a = "value";
$b = &$a; // creating a reference between $a and $b
$b = "new value";
// now a and b has "new value"
// ==========================================================================
echo $_Get["theNameInTheFormYouDealingWith"];
/*
        better in search
        worse secure
        data limit
        can be cached
    */
echo $_POST["theNameInTheFormYouDealingWith"];
/*
        better in secure
        worse in search
        no data limit
        can't be cached
    */
// ==========================================================================
if ($age > 18) {
    echo "you are old enough";
} elseif ($age > 15) {
    echo "you need more time";
} else {
    echo "not allowed for now";
}
// ==========================================================================
switch ($variable) {
    case 'value':
        # code...
        break;

    default:
        # code...
        break;
}
// ==========================================================================
for ($i = 0; $i < $size; $i++) {
    # code...
}
// ==========================================================================
while ($a <= 10) {
    # code...
}
// ==========================================================================
$array1 = ["option1", "option2", "option3"];
$array2 = ["key1" => "option1", "key2" => "option2", "option3", "option4"];
$array2["key1"]; // return option1
$array2[0]; // return option3 => because you didn't set a key so it started indexing from 0  // indexing from the last in index inputed
print_r($array); // print it in human syntax
// ==========================================================================
$Array1 = array("item1", "item2", "item3", "item4");
$Array1[0];
array_push($Array1, "item5"); // add to the end
array_pop($Array1); // remove the last element
array_shift($Array1); // remove the first element
array_reverse($Array1); // return the reversed array
count($Array1); // count the number of elements in array
// ==========================================================================
foreach ($Array as $key) {
    echo $key;
}
// ==========================================================================
$AssociativeArray = array(
    "Egypt" => "Cairo",
    "Palestine" => "Juerlism",
    "Japan" => "Tokyo"
);
$AssociativeArray["Egypt"]; // return Cairo
// to print all the values
foreach ($AssociativeArray as $key => $value) {
    $key; // return the key
    $value; // return the value associated with this key
}
array_keys($AssociativeArray); // return an array of all the keys in these array
array_values($AssociativeArray); // return an array of all the values in these array
array_flip($AssociativeArray); // flip all the keys with its values
array_chunk($array,$length); // return an array of multi arrays each one of size equal to length
array_combine($arrayOfKeys,$arrayOfValues); // return an array of with keys and values you provided
array_count_values($array); // return an array with keys of values and values of number of repeat times
count($array,$mode); // count the number of values you provided

// ==========================================================================
isset($var); // return true if the variable => declared , not null
empty($var); // return true if the variable => not declared , false , null , ""
// ==========================================================================
function funcName1($parameter1 = "something", $parameter2)
{
    // Code...
}
funcName1($parameter1, $parameter2);
funcName1(parameter2:"value");
// infinite parameters function
function funcName2(){
    $sum = 0;
    for ($i = 0; $i < func_num_args(); $i++) {
        $sum += func_get_arg($i);
    }
}
function funcName3(...$nums){
    $sum = 0;
    foreach ($nums as $num) {
        $sum += $num;
    }
}
// ==========================================================================
$stringVairable = "Kamal Sayed BadrEl-Din";
strtolower($stringVairable); // to lower case
strtoupper($stringVairable); // to upper case
trim($stringVairable); // remove white space
str_pad($stringVairable, $n, $s); // create a new value of stringVairable + the number n of the string s
strlen($stringVairable); // the length of a string
strcmp($stringVairable, $anotherString); // if they equal each other return 0
strrev($stringVairable); // reverse the string
substr($stringVairable, $start, $end); // create a sub string
explode(" ", $stringVairable); // return an array , each item ends at " " character
implode($Array); // turn an array into a string
str_split($stringVairable,$length); // create an array of string
strpos($theString,$theValue); // find if the value is in the string
str_replace($search,$replace,$theString); // replace a word by something different in a string
str_repeat($theString,$times); // repeat the string for a given number of times
// ==========================================================================
// if you have an input field and someone tried to write an javascript in it you need to use this
filter_input(INPUT_POST, $name, FILTER_SANITIZE_SPECIAL_CHARS); // this for special characters
filter_input(INPUT_POST, $name, FILTER_VALIDATE_INT); // this for numbers
// ==========================================================================
include("file. php html ..."); // include file contents in your file
// ==========================================================================
setcookie("key1", "value", time() + (86400 * $numberOfDAYS), "/filePath"); // create a cookie (key , value , expire time by seconds , file destination)
$_COOKIE["key1"];
foreach ($_COOKIE as $key => $value) {
    # code...
}
// ==========================================================================
// to create a session
session_start();
$_SESSION["key"] = "value";
session_destroy();
// ==========================================================================
// to redirect the user to a page
header("Location: file.php");
// ==========================================================================
// server variable provide you information about the page and the current server data
$_SERVER["HTTPS"];
foreach ($_SERVER as $key => $value) {
    # code...
}
// ==========================================================================
// to hash sensitive data (something like encryption)
password_hash($password, PASSWORD_DEFAULT); // return a hashed value
password_verify($userInputPassword, $theHashedPassword); // return 1 if they mathematically equal
// ==========================================================================
// to create a connection to mySQl
$connection = mysqli_connect($db_server, $username, $password, $db_name); // create a connection
$sql = "SELECT * FROM tableName";
$result = mysqli_query($connection, $sql); // add the mysql statments
mysqli_num_rows($result); // the number of available rows
$currentROW = mysqli_fetch_assoc($result);
$currentROW["fieldName"];
mysqli_close($connection); // close the connection
// ==========================================================================
class ClassName
{
    public $item1;
    private $item2;
    function __construct()
    {
        echo "New book created <br\>";
    }
    function print()
    {
        echo $this->item1 . "<br\>";
        echo $this->item2 . "<br\>";
    }
}
class InheritedClass extends ClassName
{
    // Code ...
}
$obj1 = new ClassName();
$obj1->item1 = $value;
$obj1->print();
// ==========================================================================
// concatenate strings
define("Elzero",1);
$Web_School = "in world";
echo Elzero . $Web_School;
// another way
$x = "Elzero";
$x .= "Web";
$x .= "School";
// =========================================================================
// || is greater presedence than or
$a = 10 || false; // 1
$b = 10 or false; // 10
// =========================================================================
?>
// ==========================================================================
<?php ?>
<?= $Variable ?>
// ==========================================================================
// to write a code in seperated lines and adding individual text in the middle of the result
<?php foreach ($array as $item) : ?>
    <li>Individual Text</li>
<?php endforeach; ?>
// ==========================================================================
// to include a file into the project
require "filePath"; // if there is an error , it stops the script
include "filePath"; // if there is an error , it continues the script