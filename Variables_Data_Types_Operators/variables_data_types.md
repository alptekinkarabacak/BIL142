int, char float, double... primitive data types
int foo; // Decleration, First value is assigned automatically, and it is assigned to garbage value

```
int main() {
    using namespace std; // Explain namespace logic
    int foo;
    cout<<"The value of foo is : "<< foo <<endl; // Difference between \n and
    int bar = 5; // initialization
    int baz {5}; // Always Prefer this one with curly braces
    int bam = 0.6;

    const int var = 0;
    constexpr int thx =  5;

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








Prints what?
uint8_t foo = 255;
std::cout<<static_cast<int>(++foo);





