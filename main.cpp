#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() = default;
    MyClass(double firstValue) {

    }
    void saySomething() {
        std::cout<<"Helloo \n";
    }

    std::string member;
};

void foo(std::unique_ptr<MyClass> bar) {
    bar->saySomething();
}

int main() {
    std::unique_ptr<int> smartPtr;
    smartPtr = std::make_unique<int>(20);

    std::unique_ptr<int> uniq_ptr = std::make_unique<int>(10);
    std::cout<< smartPtr<<"\n";
    uniq_ptr = std::move(smartPtr);
    std::cout<< *uniq_ptr<<"\n";
    std::cout<< smartPtr<<"\n";
    std::cout<< "The value of smartPtr : " << *smartPtr<< "\n";

    {
        std::shared_ptr<int> berke = std::make_shared<int>(10);
        {
            static int b;
            std::shared_ptr<int> alp = std::make_shared<int>(10);
            berke = alp;
        }

        b





        std::shared_ptr<int> alp_2 = berke;
    }

    void func() {
        static a{0};
        ++a;
    }




//    auto smartPtr2 = smartPtr;  // ERROR!
//    foo(smartPtr); // ERROR!

    return 0;
}