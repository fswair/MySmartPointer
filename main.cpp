#include <iostream>
#include <memory>
#include "myptr.h"

int main() {
    my_ptr<int> ptr(new int(11));
    std::cout << "*ptr = " << *ptr << " this = " << ptr.get() << "\n";
    ptr.emplace(22);
    std::cout << "*ptr = " << *ptr << " this = " << ptr.get() << "\n";
    ptr.emplace(33);
    std::cout << "*ptr = " << *ptr << " this = " << ptr.get() << "\n";
    ptr.reset(new int (9));
    return 0;
}
