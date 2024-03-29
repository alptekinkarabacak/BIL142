bool, int, char float, double... primitive data types with different sizes
float is a primitive data type that holds floating values up to 7 digits
double is primitive data type that is used to store floating-point values up to 15 digits

```
int a = pow(2,32);
std::numeric_limits<int>::max();
std::cout<<a<<"\n";
std::cout<<std::numeric_limits<int>::max()<<"\n";
```

int foo; // Decleration, First value is assigned automatically, and it is assigned to garbage value

```
int main() {
    using namespace std; // Explain namespace logic
    int foo; // Undefined Behavior
    cout<<"The value of foo is : "<< foo <<endl; // Difference between \n and
    int bar = 5; // initialization
    int baz {5}; // Always Prefer this one with curly braces
    int bam = 0.6;
    bool foo {5};

    const int var = 0;
    constexpr int thx =  5; // Difference between this and const

```
Prints what?
```
auto bil142 = 25;
bil142 = 28.2;
cout<<"The value of bil142 is : "<< bil142 <<"\n";
```
There is a c++ function that returns the size of the parameter given
```
sizeof(double)
double foo{0.0};
sizeof(foo);
```
There are other types like uint32_t, uint8_t, uint64_t. uint8_t and char are the same things.
You can check the limits of types with
```
    std::numeric_limits<uint32_t>::max();
    std::numeric_limits<uint32_t>::min();
```
CASTING
Static Cast
The static_cast operator is the most commonly used casting operator in C++. It performs compile-time type conversion and is mainly used for explicit conversions that are considered safe by the compiler. Casting between primitive types

static_cast <new_type> (expression);

```
int num = 10;

    // converting int to double
    double numDouble = static_cast<double>(num);

    // printing data type
    cout << typeid(num).name() << endl;

    // typecasting
    cout << typeid(static_cast<double>(num)).name() << endl;

    // printing double type t
    cout << typeid(numDouble).name() << "\n";
```
C type casting
```
int num = 10;

    // converting int to double
    double numDouble = (double)(num);

    // printing data type
    cout << typeid(num).name() << endl;

    // typecasting
    cout << typeid((double)(num)).name() << endl;

    // printing double type t
    cout << typeid(numDouble).name() << "\n";
```
Operators:
arithmetic operators: +, -, *, /, %
```
int a{10}, b{20};
int sum = a + b;
int modOperator = 20 % 10;
```
Prints what?
```
int a = 10, b = 20;
float result = a / b;
float a = 3.0 / 2.0;
```
Ok What about this one
```
int a = 10, b = 20;
double result = static_cast<double>(a / b) ;
```
What about this one?
```
int a = 10, b = 20;
double result = static_cast<double>(a) / b ;
```
The best practice is this
```
int a = 10, b = 20;
double result = static_cast<double>(a) / static_cast<double>(b) ;
```

Bitwise Operators

'&'	Bitwise AND Operator

'|'	Bitwise OR Operator

'^'	Bitwise XOR Operator

'~'	Bitwise Complement Operator

'<<' Bitwise Shift Left Operator

'>>' Bitwise Shift Right Operator
```
int main() {
    using namespace std;
 // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;

    unsigned char result{0};
    result = a & b;
    // The result is 00000001
    cout << "a & b = " << result << "\n";

    result = a | b;
    // The result is 00001101
    cout << "a | b = " << static_cast<int>(result) << "\n";

    result = a ^ b;
    // The result is 00001100
    cout << "a ^ b = " << static_cast<int>(result) << "\n";

    result = ~a;
    // The result is 11111010
    cout << "~a = " << static_cast<int>(result) << "\n";

    result = b << 1;
    // The result is 00010010
    cout <<"b<<1 = "<< static_cast<int>(result) << "\n";

    result = b >> 1;
    // The result is 00000100
    cout <<"b>>1 = "<< static_cast<int>(result)<< "\n";
}
```
What about this one
```
using namespace std;
unsigned char a = 5;
unsigned char result{0};
result = a >> 3;
cout<<static_cast<int>(result);
```

LogicalOperators:
Logical AND  : &&
Logical OR :  || 
Logical NOT : !

```
bool isTrue = true, isFalse = false;
bool result = (isTrue && !isFalse) || (5 > 3);
```

Assignment Operators
```
int x = 10;
x += 5; // Equivalent to x = x + 5;
x *= 2; // Equivalent to x = x * 2;
```
Pre Increment Operator and Post Increment
```
int foo{2};
++foo; // Pre increment
foo++; // Post increment
```
At the end of the road this is the same expression with this
```
int foo{2};
foo = foo + 1;
```
Can I perform the same operator with different way?

Anyway, at the end of the road you will get value incremented by 1, but different middle steps.
Pre Increment
```
int foo{2};
int bar {++foo};
cout<<"bar is : " << bar << "\n";
```
Post Increment
```
int foo{2};
int bar {foo++};
cout<<"bar is : " << bar << "\n";
```


Prints what?
```
uint8_t foo = 255;
std::cout<<static_cast<int>(foo++);
```
What about this one?
```
uint8_t foo = 255;
std::cout<<static_cast<int>(++foo);
```





