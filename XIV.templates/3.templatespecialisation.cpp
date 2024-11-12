#include <iostream>
#include <vector>
#include <string>

template <typename T>
class Stack {
private:
    std::vector<T> data;

public:
    // Pushes an element onto the stack
    void push(const T& element) {
        data.push_back(element);
    }

    // Pops the top element from the stack (if any)
    T pop() {
        if (isEmpty()) {
            throw std::runtime_error("Stack underflow");
        }
        T element = data.back();
        data.pop_back();
        return element;
    }

    // Returns the size of the stack
    size_t size() const {
        return data.size();
    }

    // Checks if the stack is empty
    bool isEmpty() const {
        return data.empty();
    }

    // Adds two integers (only works for integer types)
    T add(const T& a, const T& b) {
        if (std::is_integral<T>::value) {
            return a + b;
        } else {
            throw std::runtime_error("add function only supports integers");
        }
    }

    // Concatenates two strings (only works for string types)
    std::string concatenate(const std::string& a, const std::string& b) {
        if (std::is_same<T, std::string>::value) {
            return a + b;
        } else {
            throw std::runtime_error("concatenate function only supports strings");
        }
    }
};

int main() {
    // Stack of integers
    Stack<int> intStack;
    intStack.push(5);
    intStack.push(3);
    std::cout << "Sum (int): " << intStack.add(5.0, 3) << std::endl;
    std::cout << "Popped: " << intStack.pop() << std::endl;

    // Stack of strings
    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push(" World");
    std::cout << "Concatenated: " << stringStack.concatenate("Hi ", "there") << std::endl;

    return 0;
}
