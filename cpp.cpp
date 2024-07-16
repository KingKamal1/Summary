#include <iostream>  // the basics of programming
#include <cmath>     // the basics of math
#include <conio.h>   // to control buttons
#include <ctime>     // time tools
#include <array>     // array tools
#include <vector>    // vector tools
#include <algorithm> // algorithm functions
using namespace std;
//======================================================================
// cout << something << something ; => to print somethig (endl | '\n' => new line)
// cin >> variable >> variable ; => to store some value in a variable
//================================================================================================================
struct Name
{
    string option1;
    int option2;
};
Name ob_name;
//================================================================================================================
class A
{
private:
    int a;

public:
    A()
    {
        cout << "it is constructor A";
    }
    A(int x)
    {
        a = x;
    }
    void print()
    {
        cout << "hello from A";
    }
};
// inheriting from base class
class B : public A
{
private:
    int b;

public:
    B()
    {
        cout << "it is constructor B";
    }
    B(int x, int y) : A(x)
    {
        b = y;
    }
    void print()
    {
        A::print();
        cout << "hello from B";
    }
};
// dervied class inherit the same value twice so we make virtual to make it just one copy
class C : public A, B
{
private:
    int c;

public:
    C()
    {
        cout << "it is constructor C";
    }
    C(int x, int y, int z) : B(x, y), A(x)
    {
        c = z;
    }
    void print()
    {
        B::print();
        cout << "hello from C";
    }
};
//===============================
A ob_a;
B ob_b;
C ob_c;
//=============================================================================================================
switch (expression)
{
case value1:
    // code block for value1
    break;
case value2:
    // code block for value2
    break;
    // more cases can follow
default:
    // code block for default case
}
//=============================================================================================================
while (condition)
{
    // code to be executed repeatedly as long as the condition is true
}
//=============================================================================================================
do
{
    // code to be executed repeatedly at least once, and as long as the condition is true
} while (condition);
//=============================================================================================================
for (initialization; condition; increment / decrement)
{
    // code to be executed repeatedly as long as the condition is true
}
//=============================================================================================================
if (condition1)
{
    // code to be executed if condition1 is true
}
else if (condition2)
{
    // code to be executed if condition1 is false and condition2 is true
}
else if (condition3)
{
    // code to be executed if condition1 and condition2 are false, and condition3 is true
}
else
{
    // code to be executed if all conditions are false
}
//=============================================================================================================
#define variable 1
const int variable = 1;
//=============================================================================================================
float myFloat = 3.14;
int myInt = (int)myFloat; // C-style casting from float to int
//===================
float myFloat = 3.14;
int myInt = static_cast<int>(myFloat); // Static_cast from float to int
//=============================================================================================================
int arr[] = {1, 2, 3};
int *begin = begin(arr); // begin points to the first element of arr
//===================
int arr[] = {1, 2, 3};
int *end = end(arr); // end points to one past the last element of arr
//===================
int arr[] = {1, 2, 3};
int size = size(arr); // Size of arr
//===================
int arr1[] = {1, 2, 3};
int arr2[] = {0, 0, 0};
copy(begin(arr1), end(arr1), begin(arr2)); // arr2 is now {1, 2, 3}
//===================
int arr[] = {1, 2, 3};
fill(begin(arr), end(arr), 0); // arr is now {0, 0, 0}
//===================
int arr[] = {3, 1, 2};
sort(begin(arr), end(arr)); // arr is now {1, 2, 3}
//===================
int arr[] = {1, 2, 3};
reverse(begin(arr), end(arr)); // arr is now {3, 2, 1}
//===================
int arr[] = {1, 2, 2, 3, 2};
int count = count(begin(arr), end(arr), 2); // count = 3
//===================
int arr[] = {1, 2, 3};
int *found = find(begin(arr), end(arr), 2); // found points to the second element of arr
//===================
int arr[] = {1, 2, 3};
bool found = binary_search(begin(arr), end(arr), 2); // found is true
//===================
int arr1[] = {1, 2, 3};
int arr2[] = {1, 2, 3};
bool equal = equal(begin(arr1), end(arr1), begin(arr2)); // equal is true
//===================
int arr[] = {0, 0, 0};
fill_n(begin(arr), 2, 1); // arr is now {1, 1, 0}
//===================
int arr[] = {1, 2, 3};
int sum = accumulate(begin(arr), end(arr), 0); // sum = 6
//===================
int arr[] = {1, 2, 2, 3, 3};
int *new_end = unique(begin(arr), end(arr)); // arr is now {1, 2, 3}, new_end points to the third element of arr
//===================
int arr[] = {1, 2, 3};
rotate(begin(arr), begin(arr) + 1, end(arr)); // arr is now {2, 3, 1}
//===================
int arr[] = {3, 1, 2};
int *min = min_element(begin(arr), end(arr)); // min points to the second element of arr
//===================
int arr[] = {3, 1, 2};
int *max = max_element(begin(arr), end(arr)); // max points to the first element of arr
//===================
int arr[] = {1, 2, 3, 4, 5};
int count = count_if(begin(arr), end(arr), [](int x)
                     { return x % 2 == 0; }); // count = 2 (counts even numbers)
//===================
int arr1[] = {1, 2, 3};
int arr2[] = {4, 5, 6};
int dest[3];
transform(begin(arr1), end(arr1), begin(arr2), begin(dest), [](int x, int y)
          { return x + y; }); // dest is now {5, 7, 9}
//===================
int arr[] = {1, 2, 3};
for_each(begin(arr), end(arr), [](int &x)
         { x *= 2; }); // arr is now {2, 4, 6}
//===================
int arr[] = {1, 2, 3, 4, 5};
int *partition_point = partition(begin(arr), end(arr), [](int x)
                                 { return x % 2 == 0; }); // arr is now {4, 2, 3, 1, 5}, partition_point points to the first odd element
//===================
int arr[] = {1, 2, 3};
random_shuffle(begin(arr), end(arr)); // arr is now randomly shuffled, e.g. {2, 3, 1}
//===================
int arr[] = {1, 2, 2, 3};
int *found = adjacent_find(begin(arr), end(arr)); // found points to the second element of arr
//===================
int arr[] = {1, 2, 3};
int dest[3];
partial_sum(begin(arr), end(arr), begin(dest)); // dest is now {1, 3, 6}
//===================
int arr1[] = {1, 2, 3};
int arr2[] = {3, 1, 2};
bool sorted1 = is_sorted(begin(arr1), end(arr1)); // sorted1 is true
bool sorted2 = is_sorted(begin(arr2), end(arr2)); // sorted2 is false
//===================
int arr1[] = {5, 4, 3, 2, 1};
int arr2[] = {1, 2, 3, 4, 5};
bool heap1 = is_heap(begin(arr1), end(arr1)); // heap1 is true
bool heap2 = is_heap(begin(arr2), end(arr2)); // heap2 is false
//===================
int arr[] = {3, 1, 2};
make_heap(begin(arr), end(arr));
pop_heap(begin(arr), end(arr));
// arr is now {2, 1, 3} or {1, 2, 3}
//=====================================================================================================
// Array
#include <array>
array<type, size> name = {value1, value2, ...};
name.size();            // size of array
name.fill(value);       // fill the array with this value
name.at(index) = value; // asign the value to location of that index
name.front();           // first element
name.back();            // last element
name.empty();           // the array is empty or not
//=====================================================================================================
// String
#include <string.h>
string fname = "kamal";
string lname = "sayed";
strcat(fname, lname); // concatinate two strings
fname + lname;        // concatinate two strings
fname.append(lname);  // concatinate two strings
//=====================================================================================================
#include <cmath>
pow(basic, power);        // basic for power
fmod(number_a, number_b); // number_a modulus number_b
ceil(number);             // ceil the number to the biger one
floor(number);            // floor the number to the smaller one
round(number);            // round the number to the nearest one
trunc(number);            // trunc the number to the integer
sqrt(number);             // get the square root of the number
//=====================================================================================================
#include <cctype>
tolower(v_name); // convert to lower case
toupper(v_name); // convert to upper case
swab(v_name);    // convert the capital to small and the small to capital
isupper(v_name); // is it upper case
islower(v_name); // is it lower case
//=====================================================================================================
#include <algorithm>
sort(arr, arr + size);    // sort the array
reverse(arr, arr + size); // reverse the array
max(value1, value2);      // maximum value
min(value1, value2);      // minimum value
//=====================================================================================================
// Vector
#include <vector>
vector<type> name = {value1, value2, ...};
name.size();            // size of array
name.fill(value);       // fill the array with this value
name.at(index) = value; // asign the value to location of that index
name.front();           // first element
name.back();            // last element
name.puch_back(value);  // asign the value to a new cell at the end of the vector
name.puch_front(value); // asign the value to a new cell at the beginning of the vector
name.pop_back();        // delete the last element
name.pop_front();       // delete the first element
name.clear();           // clear the vector
name.empty();           // is the vector empty ( true or false )
//======================
// to make an itetator
vector<type> name = {value1, value2, ...};
//======
vector<type>::iterator it = name.begin();
auto it = name.begin();
//=====================================================================================================
// ranged loop
int array[] = {1, 2, 3, 4, 5};
for (int i : array)
{
    cout << i << endl;
}
//=====================================================================================================
string str;
str.length(); // to get the length of the string
//=====================================================================================================
int number = 123;
string string_number = to_string(number);
//=====================================================================================================
string formatPhoneNumber(const int digits[])
{
    // a code that write a phone number in the format (xxx) xxx-xxxx
    stringstream ss;
    ss << "(" << digits[0] << digits[1] << digits[2] << ") " << digits[3] << digits[4] << digits[5] << "-" << digits[6] << digits[7] << digits[8] << digits[9];
    return ss.str();
}
//=====================================================================================================
#include <stdio.h>
int main()
{
    // Declare a character array named message with a size of 50 characters
    char message[50];
    // Declare an integer variable named value and initialize it to 42
    int value = 42;
    // Use snprintf to format a string and store it in the message array
    // The formatted string includes the value of the value variable
    snprintf(message, sizeof(message), "The value is %d.", value);
    // Use printf to print the contents of the message array to the console
    // The '\n' character is included to add a newline after the string
    printf("%s\n", message);
    // Return 0 to indicate successful completion of the program
    return 0;
}
//======================================================================================================
#include <stdio.h>
int main()
{
    // %c: print or scan a single character
    char ch = 'A';
    printf("%c\n", ch); // prints "A"
    // %d: print or scan a signed decimal integer
    int num = 42;
    printf("%d\n", num); // prints "42"
    // %f: print or scan a floating-point number in decimal notation
    float x = 3.14159;
    printf("%f\n", x); // prints "3.141590"
    // %e or %E: print or scan a floating-point number in scientific notation
    float y = 0.00001;
    printf("%e\n", y); // prints "1.000000e-05"
    // %u: print or scan an unsigned decimal integer
    unsigned int u = 4294967295;
    printf("%u\n", u); // prints "4294967295"
    // %x or %X: print or scan a hexadecimal integer
    int hex = 0xabcdef;
    printf("%x\n", hex); // prints "abcdef"
    printf("%X\n", hex); // prints "ABCDEF"
    // %o: print or scan an octal integer
    int oct = 01234567;
    printf("%o\n", oct); // prints "1234567"
    return 0;
}
//======================================================================================================
#include <stdio.h>
#include <stdarg.h>
int main()
{
    // printf syntax: printf(format, arg1, arg2, ...)
    // printf usage: print formatted output to the console
    printf("Hello, world!\n");
    // snprintf syntax: snprintf(dest, size, format, arg1, arg2, ...)
    // snprintf usage: format a string and store the output in a character array with a specified size
    char message[50];
    int value = 42;
    snprintf(message, sizeof(message), "The value is %d.", value);
    printf("%s\n", message);
    // fprintf syntax: fprintf(file, format, arg1, arg2, ...)
    // fprintf usage: print formatted output to a file
    FILE *fp;
    fp = fopen("output.txt", "w");
    fprintf(fp, "Hello, world!\n");
    fclose(fp);
    // sprintf syntax: sprintf(dest, format, arg1, arg2, ...)
    // sprintf usage: format a string and store the output in a character array
    char message2[50];
    int value2 = 42;
    sprintf(message2, "The value is %d.", value2);
    printf("%s\n", message2);
    // vprintf syntax: vprintf(format, args)
    // vprintf usage: print formatted output to the console using a va_list of arguments
    void my_printf(char *format, ...)
    {
        va_list args;
        va_start(args, format);
        vprintf(format, args);
        va_end(args);
    }
    my_printf("Hello, %s!\n", "world");
    return 0;
}
//================================================================================================
int persistence(int num)
{
    // Declare a variable to keep track of the number of times the digits have been multiplied.
    int count = 0;
    // While num is greater than 9, repeatedly multiply the digits of num together and assign the product to num.
    while (num > 9)
    {
        // Declare a variable to store the product of the digits of num.
        int product = 1;
        // Multiply the digits of num together, starting from the rightmost digit and working its way to the leftmost digit.
        while (num > 0)
        {
            // Multiply the product by the rightmost digit of num.
            product *= num % 10;
            // Remove the rightmost digit from num.
            num /= 10;
        }
        // Assign the product of the digits to num.
        num = product;
        // Increment the number of times the digits have been multiplied.
        count++;
    }
    // Return the number of times the digits have been multiplied.
    return count;
}
//================================================================================================
// to make a sub string from the original one
string name = "hello world!";
//                           start , end ==> not including end okay
string newName = name.substr(start, end);
//================================================================================================
bool is_constructable(long n)
{
    // Check if n is even. If it is, then it is not possible to construct a campfire with four sticks.
    if (n % 2 == 0)
    {
        // Comment: If n is even, then the campfire area can be divided into two equal parts, which means that the campfire can be constructed with two sticks of equal length.
        return false;
    }
    // Iterate from 0 to the square root of n, inclusive.
    for (auto i = 0; i <= sqrt(n); i++)
    {
        // Check if the square root of n - i * i is an integer. If it is, then the campfire can be constructed with four sticks of lengths i, i, n - i * i, and n - i * i.
        if (!fmod(sqrt(n - i * i), 1))
        {
            // Comment: The square root of n - i * i is an integer if and only if n - i * i is a perfect square.
            return true;
        }
    }
    // If no value of i satisfies this condition, then it is not possible to construct a campfire with four sticks.
    return false;
}
//================================================================================================
// return roman numbers
string solution(int n)
{
    string romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";
    for (int i = 0; i < 13; ++i)
    {
        while (n >= values[i])
        {
            result += romanNumerals[i];
            n -= values[i];
        }
    }
    return result;
}
//================================================================================================
// pointers
/* the syntax is [ theSameDataType * PointerName = & VariableName ]*/
int x = 100;
int *ptr_x = &x;
printf("the value of the variable is %d or %d\n", x, *ptr_x);
printf("the address of the variable is %d or %d\n", &x, ptr_x);
//================================
int y[]{1, 2, 3, 4, 5};
int *ptr_y = y;     // the address of the first element in the array
int *ptr_y = &y[0]; // the address of the second element in the array
// the value with index
cout << "the first element is " << y[0] << endl;
cout << "the first element is " << *ptr_y << endl;
cout << "the first element is " << *(y + 0) << endl;
cout << "the first element is " << *(ptr_y + 0) << endl;
// the address of element
cout << "the address of the first element is " << y << endl;
cout << "the address of the first element is " << &y[0] << endl;
cout << "the address of the first element is " << (y + 0) << endl;
cout << "the address of the first element is " << ptr_y << endl;
cout << "the address of the first element is " << (ptr_y + 0) << endl;
//=================================
int *ptr1;           // wild pointer
int *ptr2 = NULL;    // no garbage data
int *ptr3 = nullptr; // no garbage data (advanced pointer)
// in NULL and nullptr the address which is printed is 0
//=================================
int var = 5;
void *P_unknown = &var;
/*
    to show the address but the problem it is not showing the value
    to show the value
    ======
    *(type *)ptr_name;
    *(static_cast<type *>(ptr_name));
    ======
*/
//=================================
system("pause"); // keep the terminal screen on until the program finish
system("cls");   // clear the terminal
// ========================================
namespace Name
{
    using cin;
    using cout;
    using endl;
    using getline;
}
using namespace Name;
// ========================================
// defining a global constant
#define pi 3.14;
// ========================================
// Creating an alias for a type
using my_int = int;
// Creating an alias for a namespace
namespace my_namespace
{
    int my_var = 42;
}
using my_ns = my_namespace;
// Creating an alias for a member of a namespace
using my_var_alias = my_namespace::my_var;
// Creating a parameterized type
template <typename T>
class my_class
{
public:
    void print(T arg)
    {
        cout << arg << endl;
    }
};
// Creating a parameterized function
template <typename T>
void my_func(T arg)
{
    cout << arg << endl;
}
// Creating a parameterized class
template <typename T>
class my_derived_class : public my_class<T>
{
public:
    void do_something(T arg)
    {
        this->print(arg);
    }
};
int main()
{
    // Using the alias for a type
    my_int i = 42;
    cout << i << endl;
    // Using the alias for a namespace
    cout << my_ns::my_var << endl;
    // Using the alias for a member of a namespace
    cout << my_var_alias << endl;
    // Using the parameterized type
    my_class<int> my_int_class;
    my_int_class.print(42);
    // Using the parameterized function
    my_func<double>(3.14);
    // Using the parameterized class
    my_derived_class<int> my_int_derived_class;
    my_int_derived_class.do_something(42);
    return 0;
}
// =============================================
// if you has an object with no default constructor and you want to initalize an array of objects use this
ClassName ob[3] = {
    // the first object parameters
    {parameter1, parameter2, parameter3},
    // the second object parameters
    {parameter1, parameter2, parameter3},
    // the third object parameters
    {parameter1, parameter2, parameter3}};
// =============================================
// public can be inherited in derived classes
// protected can be inherited in derived classes
// private can not be inherited in derived classes
// =============================================
// the main diffirence between the class and the structure is the default access specifier
// in the class the default is private but in the struct the default is public
class A
{
    // default
private:
    int a = 1;
    string b = "unknown";
    bool c = true;

public:
    void display()
    {
        std::cout << "a = " << a << endl;
        std::cout << "b = " << b << endl;
        std::cout << "c = " << c << endl;
    }
};
struct B
{
    // default
public:
    int a = 1;
    string b = "unknown";
    bool c = true;

private:
    void display()
    {
        std::cout << "a = " << a << endl;
        std::cout << "b = " << b << endl;
        std::cout << "c = " << c << endl;
    }
};
// ===============================================================
// operator overload
class A
{
private:
    int x = 5;

public:
    void operator++(int)
    {
        x++;
    }
    void operator++()
    {
        ++x;
    }
    int operator+(A ob)
    {
        return x + ob.x;
    }
};
// ================================================================
#include <iostream>
#include <cctype> // for isdigit
#include <cmath>  // for pow function
using namespace std;
class Stack
{
private:
    int top;
    int MAX_SIZE;
    int *items;

public:
    Stack()
    {
        top = -1;
        cout << "Enter the size of the stack : ";
        cin >> MAX_SIZE;
        items = new int[MAX_SIZE];
    }
    Stack(int size)
    {
        top = -1;
        MAX_SIZE = size;
        items = new int[MAX_SIZE];
    }
    bool is_full()
    {
        return (top == MAX_SIZE - 1);
    }
    bool is_empty()
    {
        return (top == -1);
    }
    void push(int item)
    {
        if (is_full())
        {
            cout << "Stack is Overflow" << endl;
        }
        else
        {
            top++;
            items[top] = item;
        }
    }
    int pop()
    {
        if (is_empty())
        {
            cout << "Stack is Underflow" << endl;
            return -1;
        }
        int item = items[top];
        top--;
        return item;
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << items[i] << endl;
        }
    }
};
int evaluatePostfix(const string &expression)
{
    Stack stack;
    for (char c : expression)
    {
        if (isdigit(c))
        {
            stack.push(c - '0'); // Convert char to int
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            int operand2 = stack.pop();
            int operand1 = stack.pop();
            int result;

            switch (c)
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                if (operand2 != 0)
                {
                    result = operand1 / operand2;
                }
                else
                {
                    cerr << "Error: Division by zero\n";
                    exit(EXIT_FAILURE);
                }
                break;
            case '^':
                result = pow(operand1, operand2);
                break;
            default:
                cerr << "Error: Invalid operator\n";
                exit(EXIT_FAILURE);
            }
            stack.push(result);
        }
    }

    if (!stack.is_empty())
    {
        return stack.pop();
    }
    else
    {
        cerr << "Error: Invalid postfix expression\n";
        exit(EXIT_FAILURE);
    }
}
class CircularQueue
{
private:
    int front, rear, capacity;
    int *items;

public:
    CircularQueue(int size)
    {
        capacity = size;
        front = rear = -1;
        items = new int[capacity];
    }
    ~CircularQueue()
    {
        delete[] items;
    }
    bool is_empty()
    {
        return front == -1;
    }
    bool is_full()
    {
        return (rear + 1) % capacity == front;
    }
    void push(int item)
    {
        if (is_full())
        {
            cout << "Queue is full. Cannot add." << endl;
        }
        else
        {
            if (is_empty())
            {
                front = rear = 0;
            }
            else
            {
                rear = (rear + 1) % capacity;
            }
            items[rear] = item;
        }
    }
    int pop()
    {
        if (is_empty())
        {
            cout << "Queue is empty. Cannot remove." << endl;
            return -1;
        }
        else
        {
            int item = items[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % capacity;
            }
            return item;
        }
    }
    void display()
    {
        if (is_empty())
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            int i = front;
            do
            {
                cout << items[i] << " | ";
                i = (i + 1) % capacity;
            } while (i != (rear + 1) % capacity);
            cout << endl;
        }
    }
};
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class linked_list
{
private:
    Node *list;

public:
    linked_list()
    {
        list = nullptr;
    }
    void addFirst(int value)
    {
        Node *p = new Node(value);
        if (list == nullptr)
        {
            list = p;
        }
        else
        {
            p->next = list;
            list = p;
        }
    }
    void addLast(int value)
    {
        Node *p = new Node(value);
        if (list == nullptr)
        {
            list = p;
        }
        else
        {
            Node *q = list;
            while (q->next != nullptr)
                q = q->next;
            q->next = p;
        }
    }
    void addAfter(int value, int position)
    {
        Node *q = list;
        int i = 0;
        while (q != nullptr && i < position)
        {
            q = q->next;
            i++;
        }
        if (q == nullptr || i != position)
        {
            cout << "Position is not found\n";
            return;
        }
        Node *p = new Node(value);
        p->next = q->next;
        q->next = p;
    }
    int removeFirst()
    {
        if (list == nullptr)
        {
            cout << "List is empty\n";
            return -1;
        }
        else
        {
            int data = list->data;
            if (list->next == nullptr)
            {
                delete (list);
                list = nullptr;
            }
            else
            {
                Node *p = list;
                list = list->next;
                delete (p);
            }
            return data;
        }
    }
    int removeLast()
    {
        if (list == nullptr)
        {
            cout << "List is empty\n";
            return -1;
        }
        else
        {
            int data;
            if (list->next == nullptr)
            {
                data = list->data;
                delete (list);
                list = nullptr;
            }
            else
            {
                Node *q = list;
                while (q->next->next != nullptr)
                    q = q->next;
                data = q->next->data;
                delete (q->next);
                q->next = nullptr;
            }
            return data;
        }
    }
    int search(int value)
    {
        Node *q = list;
        int position = 0;
        while (q != nullptr && q->data != value)
        {
            q = q->next;
            position++;
        }
        if (q == nullptr)
            position = -1;
        return position;
    }
    void reverseData()
    {
        Node *current, *prev, *next;
        current = list;
        prev = nullptr;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        list = prev;
    }
    void removeData(int value)
    {
        if (list == nullptr)
        {
            cout << "Linked list is empty\n";
            return;
        }
        else if (list->data == value)
        {
            removeFirst();
            return;
        }
        Node *p = list;
        while (p->next != nullptr && p->next->data != value)
        {
            p = p->next;
        }
        if (p->next == nullptr)
        {
            cout << "Data not found\n";
            return;
        }
        Node *q = p->next;
        p->next = q->next;
        delete (q);
    }
    void display()
    {
        cout << "The List is : ";
        Node *p = list;
        while (p != nullptr)
        {
            cout << p->data << " | ";
            p = p->next;
        }
        cout << endl;
    }
    ~linked_list()
    {
        while (list != nullptr)
        {
            int temp = removeFirst();
        }
    }
};
class treeNode
{
public:
    int value;
    treeNode *leftChild;
    treeNode *rightChild;
};
class binary_tree
{
private:
    treeNode *root;

public:
    binary_tree()
    {
        root = nullptr;
    }
    treeNode *createNode(int data)
    {
        treeNode *p = new treeNode();
        p->value = data;
        p->leftChild = nullptr;
        p->rightChild = nullptr;
        return p;
    }
    void freeNode(treeNode *p)
    {
        delete (p);
    }
    void insertNode(int value)
    {
        treeNode *new_node = createNode(value);
        bool done = false;
        if (root == nullptr)
        {
            root = new_node;
            return;
        }
        treeNode *temp = root;
        while (!done)
        {
            if (new_node->value == temp->value)
            {
                cout << "the value is already exit" << endl;
                done = true;
            }
            else if (new_node->value > temp->value)
            {
                if (temp->rightChild == nullptr)
                {
                    temp->rightChild = new_node;
                    done = true;
                }
                temp = temp->rightChild;
            }
            else if (new_node->value < temp->value)
            {
                if (temp->leftChild == nullptr)
                {
                    temp->leftChild = new_node;
                    done = true;
                }
                temp = temp->leftChild;
            }
        }
    }
    void preOrder_traverse(treeNode *t)
    {
        if (t == nullptr)
        {
            cout << "the tree is empty" << endl;
            return;
        }
        if (t != nullptr)
        {
            cout << t->value << " |";
            preOrder_traverse(t->leftChild);
            preOrder_traverse(t->rightChild);
        }
    }
    void inOrder_traverse(treeNode *t)
    {
        if (t == nullptr)
        {
            cout << "the tree is empty" << endl;
            return;
        }
        if (t != nullptr)
        {
            inOrder_traverse(t->leftChild);
            cout << t->value << " |";
            inOrder_traverse(t->rightChild);
        }
    }
    void postOrder_traverse(treeNode *t)
    {
        if (t == nullptr)
        {
            cout << "the tree is empty" << endl;
            return;
        }
        if (t != nullptr)
        {
            postOrder_traverse(t->leftChild);
            postOrder_traverse(t->rightChild);
            cout << t->value << " |";
        }
    }
    void freeBST(treeNode *t)
    {
        if (t == nullptr)
        {
            return;
        }
        if (t->leftChild != nullptr)
        {
            freeBST(t->leftChild);
        }
        if (t->rightChild != nullptr)
        {
            freeBST(t->rightChild);
        }
        freeNode(t);
        return;
    }
};
// =======================================================================================
/// @brief a function that adds two values
/// @param a first number
/// @param b second number
/// @return sum of two numbers
int sum(int a, int b)
{
    return a + b;
}
// =================================================================
#include <string>
stoi(variable); // string to integer
variable.substr(0, 1); // substring from the variable
// =======================================================================================
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
  string expression;
  double operand1, operand2, result;
  char operator_, equal;
  getline(cin, expression);
  stringstream ss(expression);
  ss >> operand1 >> operator_ >> operand2 >> equal >> result;
  if (ss.fail() || equal != '=') {
    cout << "Invalid expression format." << endl;
    return 1;
  }
  double calculatedResult;
  switch (operator_) {
    case '+':
      calculatedResult = operand1 + operand2;
      break;
    case '-':
      calculatedResult = operand1 - operand2;
      break;
    case '*':
      calculatedResult = operand1 * operand2;
      break;
    default:
      cout << "Invalid operator." << endl;
      return 1;
  }
  if (calculatedResult == result) {
    cout << "Yes" << endl;
  } else {
    cout << calculatedResult << endl;
  }
  return 0;
}
// ------------------------------------------------------------------------------------------------
#include <iomanip>
int main() {
    int number;
    std::cin >> number;
    std::cout << std::setw(4) << std::setfill('0') << std::right << number;
    cout << fixed << setprecision(1) << number;
    return 0;
}
// ------------------------------------------------------------------------------------------------
/*
    a book shop sells books in only two days of the week
    the first day price is a and the second day price is b
    in the first day if you buy m of books you get one for free
    in the second day if you buy m of books you only get m of books ( no free gift )
    calculate the mimimum price to buy n of books 
*/
int main() {
  long long a, b, n, m, cost1 = 0;
  cin >> a >> b >> n >> m;
  long long mt = m + 1;
  long long mtc = m * a;
  cost1 = (n / mt) * mtc;  // Cost of buying multiples of mt items at price a
  long long left = n % mt;  // Number of remaining items after buying multiples of mt
  long long lca = left * a;  // Cost of buying remaining items at price a
  long long lcb = left * b;  // Cost of buying remaining items at price b
  cost1 += min(lca, lcb);  // Add cost of buying remaining items
  long long cost2 = n * b;  // Cost of buying all items at price b
  cout << min(cost1, cost2) << endl;
  return 0;
}
// Explanation of the solution
/*
    you have to take one of the paths
    buy by a =====> then you better take the offer (m) instead of (m+1)
    buy by b =====> then you better take the offer cheaper price mostly
    if you took the first you take the offer (n / m+1) * m  is your total offer + cost of the left after the offer (the rest of n * min(a,b))
    if you took path number two just n * b
    you get two costs one from the first path and another from the second path and compare them and take the cheapest
*/
// =================================================================================================
// count the number of each letter in the string
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  string str;
  cin >> str;
  unordered_map<char, int> charCount;
  for (char c : str) {
    charCount[c]++;
  }
  vector<pair<char, int>> sortedChars(charCount.begin(), charCount.end());
  sort(sortedChars.begin(), sortedChars.end());
  for (auto const& p : sortedChars) {
    cout << p.first << " : " << p.second << endl;
  }
  return 0;
}
// ==========================================================================================
// Algorithms
// ==========================================================================================
// Insertion Sort
void insertion_sort(int arr[], int n) {
//   """
//   Sorts an array using insertion sort algorithm.
//   Args:
//       arr: The array to be sorted.
//       n: The size of the array.
//   """
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    // Move elements of arr[0..i-1], that are greater than key, to one position ahead
    // of their current position
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
// Merge Sort
void merge(int arr[], int left, int mid, int right) {
//   """
//   Merges two sorted sub-arrays into a single sorted sub-array.
//   Args:
//       arr: The array to be sorted.
//       left: Starting index of the left sub-array.
//       mid: Middle index of the array (inclusive of left sub-array and exclusive of right sub-array).
//       right: Ending index of the right sub-array (exclusive).
//   """
  int n1 = mid - left + 1;  // Size of the left sub-array
  int n2 = right - mid;     // Size of the right sub-array
  // Create temporary arrays to hold left and right sub-arrays
  int left_arr[n1], right_arr[n2];
  // Copy data to temporary arrays
  for (int i = 0; i < n1; i++) {
    left_arr[i] = arr[left + i];
  }
  for (int j = 0; j < n2; j++) {
    right_arr[j] = arr[mid + 1 + j];
  }
  // Merge the temporary arrays back into arr[left..right]
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (left_arr[i] <= right_arr[j]) {
      arr[k] = left_arr[i];
      i++;
    } else {
      arr[k] = right_arr[j];
      j++;
    }
    k++;
  }
  // Copy the remaining elements of left_arr, if there are any
  while (i < n1) {
    arr[k] = left_arr[i];
    i++;
    k++;
  }
  // Copy the remaining elements of right_arr, if there are any
  while (j < n2) {
    arr[k] = right_arr[j];
    j++;
    k++;
  }
}
void merge_sort(int arr[], int left, int right) {
//   """
//   Sorts an array using merge sort algorithm.
//   Args:
//       arr: The array to be sorted.
//       left: Starting index of the sub-array to be sorted.
//       right: Ending index of the sub-array to be sorted (exclusive).
//   """
  if (left < right) {
    // Find the middle point of the sub-array
    int mid = left + (right - left) / 2;
    // Sort first and second halves
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    // Merge the sorted halves
    merge(arr, left, mid, right);
  }
}
// Heap Sort
// Function to swap two elements
void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
// Function to heapify a subtree rooted with node `i` which is assumed to be a max heap
void heapify(int arr[], int n, int i) {
  int largest = i;  // Initialize largest as root
  int left = 2 * i + 1;  // left = 2*i + 1
  int right = 2 * i + 2; // right = 2*i + 2
  // If left child is larger than root
  if (left < n && arr[left] > arr[largest])
    largest = left;
  // If right child is larger than largest so far
  if (right < n && arr[right] > arr[largest])
    largest = right;
  // If largest is not root
  if (largest != i) {
    swap(arr, i, largest);
    // Recursively heapify the affected sub-tree
    heapify(arr, n, largest);
  }
}
// Function to build a max heap from the array
void buildHeap(int arr[], int n) {
  // Start from last internal node (parent of all leaves) and heapify all sub-trees
  // which are not leaf nodes
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);
}
// Function to sort an array (arr) of size n using Heap Sort
void heapSort(int arr[], int n) {
  // Build a max heap from the input array
  buildHeap(arr, n);
  // One by one extract an element from heap (which is always the largest), move it to
  // end, and call max heapify on the reduced heap
  for (int i = n - 1; i > 0; i--) {
    // Move current root to end
    swap(arr, 0, i);
    // call max heapify on the reduced heap
    heapify(arr, i, 0);
  }
}