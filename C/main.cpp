#include <iostream>
#include "Stack.hpp"
#include "Queue.hpp"

void test_stack(){
    Stack stack = Stack();
    std::cout << "testing stack" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << i << " --> " ;
        stack.push(i);
    }

    std::cout << "end" << std::endl;


    int size = stack.get_size();
    std::cout << size << std::endl;


    for (int i = 0; i <size; i++) {

        std::optional<int> item = stack.pop();
        std::cout << " <-- " << *item;
    }

    std::cout << "" << std::endl;

}

void test_queue(){
    Queue queue = Queue();
    std::cout << "testing queue" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << i << " --> " ;
        queue.enqueue(i);
    }
    std::cout << "end" << std::endl;

    int size = queue.get_size();
    std::cout << size << std::endl;

    for (int i = 0; i < size; ++i) {
        std::optional<int> item = queue.dequeue();
        std::cout << " <-- " << *item;
    }
    std::cout << " end" << std::endl;

    std::cout << queue.get_size() << std::endl;



}

int main() {
    test_stack();
    std::cout << "\n";
    test_queue();

    std::cout << "end of program" << std::endl;
    return 0;
}
