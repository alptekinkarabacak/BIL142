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
There are other types like uint32_t, uint8_t, uint64_t

