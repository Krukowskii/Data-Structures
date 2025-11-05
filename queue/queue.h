#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <cstddef>
#include <cstdlib>
#include <ctime>

template<typename T>
class queue{
    private:

    T* arr;
    
    std::size_t count;
    std::size_t capacity;
    public:

    queue();
    ~queue();

    void push(const T& value);
    void pop();
    T& front() const {return *arr;}
    std::size_t size() const {return count;}
    bool empty() const {return count == 0;}
};

#endif