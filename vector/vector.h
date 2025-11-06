#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>

template<typename T>
class vector{
    private:
    T* arr;
    std::size_t count;
    std::size_t capacity;

    public:
    vector();
    ~vector();

    //helpers
    void isFull();
    void isToBig();
    
    void push_back(const T& value);
    void pop_back();
    void erase(const std::size_t index);
    void shrinkToFit();

    T& operator[](std::size_t index) {return arr[index];}
    std::size_t size() const {return count;}
    bool empty() const {return count == 0;}
    T* begin() const {return arr;}
    T* end() const {return arr + count;}
};

#endif
