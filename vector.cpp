#include "vector.h"

template<typename T>
vector<T>::vector(){
    capacity = 5;
    count = 0;
    arr = new T[capacity];
}

template <typename T>
vector<T>::~vector()
{
    delete[] arr;
}

template <typename T>
void vector<T>::push_back(const T& value)
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
void vector<T>::pop_back()
{
    if(count == 0) return;

    count --;

    if(count > 0 && count <= capacity / 4)
    {
        capacity /= 4;
        T* temp = new T[capacity];
        for(std::size_t i = 0; i < count; i++)
            temp[i] = arr[i];
        delete[] arr;
        arr = temp;
    }
}

template <typename T>
void vector<T>::erase(const std::size_t index)
{
    for(std::size_t i = index; i < count - 1; i++)
        arr[i] = arr[i + 1];
    count--;
    if(count > 0 && count <= capacity / 4)
    {
        capacity /= 4;
        T* temp = new T[capacity];
        for(std::size_t i = 0; i < count; i++)
            temp[i] = arr[i];
        delete[] arr;
        arr = temp;
    }
}

template <typename T>
bool vector<T>::empty()
{
    return count == 0;
}

template <typename T>
void vector<T>::shrink_to_fit()
{
    capacity = count;
}
