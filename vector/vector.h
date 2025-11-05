#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
#include <iostream>
#include <cstdlib>
#include <ctime>

template<typename T>
class vector{
    private:
    T* arr;
    std::size_t count;
    std::size_t capacity;
    public:
    vector();
    ~vector();

    void push_back(const T& value);
    void pop_back();
    void erase(const std::size_t index);
    bool empty();
    void shrink_to_fit();

    T& operator[](std::size_t index){return arr[index];}
    std::size_t size() const {return count;}
    T* begin() const {return arr;}
    T* end() const {return arr + count;}
};

#endif

