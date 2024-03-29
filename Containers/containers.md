Standard Library Containers

Always use standard library containers instead of raw pointers, to store sequential data. There are a lot of data structures to store multiple data, vector, array, map, set, pair... etc.

Standard Library Array
You have to include <array> to use std::array
syntax is:
```
std::array<type, size> nameOfArray
```
```
#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> ar1;
    std::array<int, 5> ar2{0, 0, 0, 0, 0};
    std::array<int, 5> ar3  = {0, 0, 0, 0, 0};
}
```
You can use lot of std::array functions to do some basic jobs, like size(), empty(), swap() for swapping two arrays.
Another main advantage of using std::array is, you can access the size of an array. Or you can overload with different sized arrays
```
#include <iostream>
#include <array>

void func(std::array<int, 6> foo) {

}

void func(std::array<int, 5> foo) {

}

int main()
{
    std::array<int, 5> ar1;
    std::array<int, 5> ar2{0, 0, 0, 0, 0};
    std::array<int, 5> ar3  = {0, 0, 0, 0, 0};
    func(ar1);
}
```
When you are using array on stack, you have to do some mathematical calculation, 
But when you are using pointer on heap, you can not access the size.

If the size is not known you can use std::vector.
Standard Library Vector
You have to include vector library to your code.
```

#include <iostream>
#include <vector>


int main()
{
    std::vector<int> g1;
    std::vector<int> g2(10);
    std::vector<int> g3{1, 2, 3, 4};
    // To add new element to a vector.
    g1.emplace_back(5);
    g1.emplace_back(6);
    g1.emplace_back(7);
    std::cout<<g1.size();
    // Describe the expanding the memory
}
```
To erase element or elements from a vector there are 3 methods:
1) pop_back()
```
#include <iostream> 
#include <vector> 
using namespace std; 
 
int main(){ 
    vector<int> v; 
    v.push_back(3);           //Insert element 3 
    v.push_back(5);           //Insert element 5 
    v.push_back(7);           //Insert element 7 
     
    //vector(v) has 3 elements with size 3 
 
    v.pop_back();            //This method will remove the last element 
 
    for(int i=0;i<v.size();i++){ 
        cout << v[i] << " "; 
    } 
     
    return 0; 
}
```
2) erase()
```
#include <iostream> 
#include <vector> 
using namespace std; 
 
int main(){ 
    vector<int> v; 
     
    //Insert values 0 to 5 
    for(int i=0;i<=5;i++) 
        v.push_back(i); 
     
    //vector has [0,1,2,3,4,5] 
 
    //erase the 5th element 
    v.erase(v.begin()+4); 
 
    //erase first 3 elements 
    v.erase(v.begin(),v.begin()+3); 
 
    for(int i=0;i<v.size();i++){ 
        cout << v[i] << " "; 
    } 
     
    return 0; 
}
```
3) clear
```
#include <iostream> 
#include <vector> 
using namespace std; 
 
int main(){ 
    vector<int> v; 
    v.push_back(5);    //Insert element 5 
    v.push_back(10);   //Insert element 10 
     
    //Empty the vector 
    v.clear(); 
    v.push_back(11);    //Insert element 11 
    v.push_back(12);    //Insert element 12 
 
    //In the end, the vector contains elements 11 and 12  
     
    for(int i=0;i<v.size();i++){ 
        cout << v[i] << " "; 
    } 
         
    return 0; 
}
```

for each loop in c++ 

Syntax:
```
for (data_type  variable_name : container_name) {

     operations using variable_name

}
```

```
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 10, 20, 30, 40 };
 
    // Printing elements of an array using
    // foreach loop 
    // Here, int is the data type, x is the variable name 
    // and arr is the array for which we want to iterate foreach
      cout<<"Traversing the array with foreach using array's data type: ";
    for (int x : arr) {
        cout<<x<<" ";
    }
       
      // data type of x is set as int
    cout<<"\nTraversing the array with foreach using auto keyword     : ";

      for (auto x : arr) {
          cout<<x<<" ";
      }
}
```

```
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<string> value{ "This",    "is",    "foreach",
                          "example", "using", "vector." };

    cout << "Traversing the vector with foreach using "
            "vector's data type: ";

    for (string v : value) {
        cout << v << " ";
    }

    cout << "\nTraversing the vector with foreach using "
            "auto keyword      : ";

    for (auto v : value) {
        cout << v << " ";
    }

    return 0;
}
```
What about if I try the change the value with for each?



for loop with iterator

```
#include <iostream>
#include <memory>


int main() {
    std::vector<int> myVec{1, 2, 3, 5};
    std::vector<int>::iterator it = myVec.begin();

    for(it;  it != myVec.end();  ++it) {
        std::cout<<*it<<"\n";
    }

    return 0;
}
```




Map
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.

std::map is the class template for ordered map containers and it is defined inside the <map> header file.

```
#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main()
{
    // Create a map of strings to integers
    map<string, int> mp;
 
    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
 
    // Get an iterator pointing to the first element in the
    // map
    map<string, int>::iterator it = mp.begin();
 
    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first
             << ", Value: " << it->second << "\n";
        ++it;
    }
 
    return 0;
}
```

Creating a Map


```
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
 
int main()
{
 
    // empty map container
    map<int, int> gquiz1;
 
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
 
    // another way of inserting a value in a map
    gquiz1[7] = 10;

     // assigning the elements from gquiz1 to gquiz2
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

    
    return 0;
}
```

Erasing an Element

```
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
 
int main()
{
 
    // empty map container
    map<int, int> gquiz1;
 
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
 
    // another way of inserting a value in a map
    gquiz1[7] = 10;
 
    // printing map gquiz1
 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
 
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
 
 
    return 0;
}
```
Dont forget to elements will be stored in ordered way

```
#include <iostream>
#include <map>

int main() {
    std::map<int, int> myMap;

    // insert elements in random order
    myMap.insert(std::pair<int, int>(2, 40));
    myMap.insert(std::pair<int, int>(1, 30));

    for (auto element: myMap) {
        std::cout<<element.first<<"\n";
    }

    return 0;
}
```

With iterator?






