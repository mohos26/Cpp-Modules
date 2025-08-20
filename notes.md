Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor. They are special lines interpreted before the compilation of the program itself begins. (they are not a c++ code)
-------------------------------------------------------------------------------------------------------------------
🔹 Operator Overloading in C++

Idea: You can define new behavior for operators (+, *, <<, …) when used with your own classes/objects.

Syntax: Written as operator<symbol> inside or outside a class.

✅ Operators you CAN overload:

Arithmetic: + - * / % ++ --

Comparison: == != < > <= >=

Logical: && || !

Assignment: = += -= *= /=

Access: [] () -> ->*

Input/Output: << >>

❌ Operators you CANNOT overload:

. (dot)

:: (scope resolution)

.* (pointer-to-member)

?: (ternary operator)

sizeof, typeid, alignof

# (preprocessor)
-------------------------------------------------------------------------------------------------------------------
Initialization of Variables:


C-like Initialization:

int x = 0;


Constructor Initialization:

int x(0);


Uniform Initialization (C++11):

int x{0};
-------------------------------------------------------------------------------------------------------------------
Type deduction: auto and decltype


int foo = 0;
auto bar = foo;  // the same as: int bar = foo;


int foo = 0;
decltype(foo) bar;  // the same as: int bar;
-------------------------------------------------------------------------------------------------------------------
In raw strings, ignoring the delimiting sequence itsel:

R"(string with \backslash)"
R"&%$(string with \backslash)&%$"
-------------------------------------------------------------------------------------------------------------------
Precedence table from highest to lowest:

Scope ::

Postfix ++ -- () [] . ->

Prefix ++ -- ~ ! + - & * new delete sizeof (type)

Pointer-to-member .* ->*

Arithmetic scaling * / %

Arithmetic addition + -

Bitwise shift << >>

Relational < > <= >=

Equality == !=

Bitwise AND &

Bitwise XOR ^

Bitwise OR |

Logical AND &&

Logical OR ||

Assignment = *= /= %= += -= >>= <<= &= ^= |=

Conditional ?:

Sequencing ,
-------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	int i = 0;

start:
	cout << i << " ";
	i++;
	if (i < 5)
		goto start; // jump to start

	cout << "\nDone!" << endl;
	return 0;
}
-------------------------------------------------------------------------------------------------------------------
Inline Functions:

Short functions can be declared as inline to reduce the overhead of the function call:


inline string concatenate(const string& a, const string& b) {
	return a + b;
}
-------------------------------------------------------------------------------------------------------------------
🔹 What is a Reference in C++?

A reference is another name for an existing variable.

In other words, it is an alias for a variable already in memory.

Any operation you perform on a reference will directly affect the original variable.

🔹 Properties of References:

Must be initialized when defined.

The reference cannot be changed later:

Once a reference is associated with a variable, you cannot make it point to another variable.

No internal pointers:

A reference is not a pointer; it is simply another name for the variable.

Can be used with functions:

To pass variables without copying them (pass by reference).

To modify original variables within a function.

🔹 Reference with Pointers

A reference is not a pointer, but it can be used to access variables like a pointer.

Difference:

Reference                          vs        Pointer
Does not require access.           | Requires access.
Must be initialized at definition. | Can be left uninitialized.
Cannot be changed later.           | Can be changed to point to another variable.
-------------------------------------------------------------------------------------------------------------------
🔹 Reference to const

Allows access to a variable's value without modifying it.

Useful for passing large variables to functions without copying them, and also for protection.

void printValue(const int &x) {
    cout << x << endl;
    // x++; // Error! Cannot be changed
}
-------------------------------------------------------------------------------------------------------------------
| Storage Class | Scope        | Lifetime                | Default Initialization   |
| ------------- | ------------ | ----------------------- | ------------------------ |
| auto          | local        | ends with block         | غير مهيأ (garbage)       |
| register      | local        | ends with block         | غير مهيأ                 |
| static        | local/global | طوال البرنامج   |           0 إذا لم تُهيأ          |
| extern        | global       | طوال البرنامج   | يعتمد على المتغير الأصلي          |
| mutable       | class member | طوال البرنامج   |       يعتمد على المتغير          |


🔹 Important Tips

Always use local variables unless a global variable is needed.

Use static to store state between function calls.

Use extern when splitting your program into multiple files.
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------
