#include "vector.h"

template<typename T>
vector<T>::vector()
{
    capacity = 5;
    arr = new T[capacity];
    count = 0;
}

template <typename T>
vector<T>::~vector()
{
    delete[] arr;
}

template <typename T>
void vector<T>::isFull()
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
}

template <typename T>
void vector<T>::isToBig()
{
    if(count <= capacity / 4 && capacity > 5)
    {
        capacity /= 2;
        T* temp = new T[capacity];
        for(std::size_t i = 0; i < count; i++)
            temp[i] = arr[i];
        delete[] arr;
        arr = temp;
    }
}

template <typename T>
void vector<T>::push_back(const T &value)
{
    isFull();
    arr[count++] = value;
}

template <typename T>
void vector<T>::pop_back()
{
    count--;
    isToBig();
}

template <typename T>
void vector<T>::erase(const std::size_t index)
{
    for(std::size_t i = index; i < count - 1; i++)
        arr[i] = arr[i + 1];
    count--;

    isToBig();
}

template <typename T>
void vector<T>::shrinkToFit()
{
    if(capacity == count) return;
    capacity = count > 0 ? count : 1;
}
