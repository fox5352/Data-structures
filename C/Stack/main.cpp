#include <iostream>
#include "Stack.hpp"

void test_stack(){
    Stack stack = Stack();

    for (int i = 0; i < 10; ++i) {
        std::cout << i << " --> " ;
        stack.push(i);
    }

    std::cout << "end" << std::endl;

    int size = stack.get_size();
    std::cout << size << std::endl;
git
    for (int i = 0; i <size; i++) {

        std::optional<int> item = stack.pop();
        std::cout << " <-- " << *item;
    }

    std::cout << "" << std::endl;
}

int main() {
    test_stack();

    std::cout << "end of program" << std::endl;
    return 0;
}
