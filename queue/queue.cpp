#include "queue.h"

template<typename T>
queue<T>::queue()
{
    capacity = 5;
    arr = new T[capacity];
    count = 0;
}

template <typename T>
queue<T>::~queue()
{
    delete[] arr;
}

template <typename T>
void queue<T>::push(const T &value)
{
    if(count == capacity)
    {
        capacity *= 2;
        T* temp = new T[capacity];
        for(std::size_t i = 0; i < count; i++)
            temp[i] = arr[i];
        delete[] arr;
        arr = temp;
    }
    arr[count++] = value;
}

template <typename T>
void queue<T>::pop()
{
    if(count == 0) return;
    
    for(std::size_t i = 1; i < count; i++)
        arr[i - 1] = arr[i];
    count--;
    
    if(count > 0 && count <= capacity/4)
    {
        capacity /= 2;
        T* temp = new T[capacity];
        for(std::size_t i = 0; i < count; i++)
            temp[i] = arr[i];
        delete[] arr;
        arr = temp;
    }
}
