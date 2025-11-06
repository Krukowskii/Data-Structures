#include "vector.cpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
void print(vector<int>& arr)
{
    for(auto& el : arr)
        std::cout << el << " ";
    std::cout << "\n\n";
}
int main()
{
    int n, a;
    std::cin >> n;
    vector<int> arr;
    std::srand(std::time(0));
    for(std::size_t i = 0; i < n; i++)
        arr.push_back(std::rand() % 100);
    print(arr);

    arr.pop_back();
    print(arr);

    arr.erase(std::rand() % (n - 1));
    print(arr);
}
