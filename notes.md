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
C++ provides two standard mechanisms to check if the allocation was successful:

foo = new int [5];  // if allocation fails, an exception is thrown


The other method is known as nothrow, and what happens when it is used is that when a memory allocation fails, instead of throwing a bad_alloc exception or terminating the program, the pointer returned by new is a null pointer, and the program continues its execution normally.

This method can be specified by using a special object called nothrow, declared in header <new>, as argument for new:

foo = new (nothrow) int [5];


In this case, if the allocation of this block of memory fails, the failure can be detected by checking if foo is a null pointer:

int * foo;
foo = new (nothrow) int [5];
if (foo == nullptr) {
  // error assigning memory. Take measures.
}
-------------------------------------------------------------------------------------------------------------------
اقترح المهندس البرمجي الشهير، روبرت سي. مارتن، المعروف بلقب "العم بوب"، أن هناك ثلاثة أنماط برمجة أساسية تشكل قاعدة تطوير البرمجيات:

البرمجة الهيكلية

البرمجة الدالية (Functional)

البرمجة الكائنية التوجه (OOP)

ويشير العم بوب إلى أن أي نمط برمجي جديد سيقدم قيودًا جديدة، تمامًا كما تفعل الأنماط الثلاثة الحالية. واستنادًا إلى التاريخ، لم يظهر أي نمط جديد خلال نصف القرن الماضي، مما يدعم وجهة نظره بأن هذه الأنماط الثلاثة هي الأهم على الإطلاق.
-------------------------------------------------------------------------------------------------------------------
ألان كاي، مبتكر مفهوم OOP، حدد سببين رئيسيين لتطويره:

البحث عن هياكل وحدات أفضل للأنظمة المعقدة (مع إخفاء التفاصيل)

الرغبة في تطوير نسخ أكثر مرونة من التعيينات
-------------------------------------------------------------------------------------------------------------------
المفاهيم الأربعة الأساسية في OOP:

التغليف (Encapsulation): إخفاء بيانات الكائن والوصول إليها عبر الدوال فقط.

الوراثة (Inheritance): السماح لفئة باكتساب خصائص وسلوكيات فئة أخرى.

التجريد (Abstraction): إخفاء التفاصيل غير الضرورية لتقليل التعقيد.

تعدد الأشكال (Polymorphism): نفس الدالة تتصرف بشكل مختلف حسب نوع الكائن.
-------------------------------------------------------------------------------------------------------------------
In 1965, Hoare had introduced ‘null’ in the ALGOL W language. In retrospect, Hoare has since referred to the ‘null’ pointer as his “billion-dollar mistake” and has expressed regret for introducing this feature.
-------------------------------------------------------------------------------------------------------------------
الفئات تحتوي على محددات وصول لتحديد من يمكنه الوصول للأعضاء:

private: الأعضاء خاصة، يمكن الوصول إليها فقط من داخل الفئة أو من أصدقاء الفئة (friends).

protected: الأعضاء محمية، يمكن الوصول إليها من داخل الفئة وأعضاء الفئات المشتقة.

public: الأعضاء عامة، يمكن الوصول إليها من أي مكان يظهر فيه الكائن.

افتراضيًا، كل الأعضاء في فئة معرفة بـ class تكون private إذا لم يُذكر خلاف ذلك.
-------------------------------------------------------------------------------------------------------------------
لتجنب حالات عدم التهيئة:

المنشئ (Constructor): دالة خاصة بالفئة تُستدعى تلقائيًا عند إنشاء الكائن.

اسم المنشئ يجب أن يطابق اسم الفئة ولا يحتوي على نوع عائد.
-------------------------------------------------------------------------------------------------------------------
Constructors

A constructor is a special member function that is automatically called after a non-aggregate class type object is created.

If an accessible matching constructor is found, memory for the object is allocated, and then the constructor function is called.
If no accessible matching constructor can be found, a compilation error will be generated.
-------------------------------------------------------------------------------------------------------------------
std is the namespace of the C++ Standard Library.

It contains almost everything in standard C++: streams, containers, algorithms, utilities, smart pointers, strings, exceptions, and more.

Using std ensures no name collisions with your own code.
-------------------------------------------------------------------------------------------------------------------
What is :: ?

:: is called the 'Scope Resolution Operator'.

It allows access to elements (variables, functions, objects…) that exist inside a namespace, class/struct, or in the global scope.
-------------------------------------------------------------------------------------------------------------------
What is 'this'?

'this' is a hidden pointer that exists inside every object of a class in C++.

Its purpose is to point to the current object that the member function is working on.

In other words: when you call a member function on an object, 'this' represents the memory address of that object.
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
