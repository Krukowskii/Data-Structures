#include "vector.cpp"

const void Print(vector<int>& arr){
    for(auto& el : arr)
        std::cout << el << " ";
}
void Input(vector<int>& arr, int& a, int n)
{
    for(size_t i = 0; i < n; i++)
    {
        a = std::rand() % 100;
        arr.push_back(a);
    }
}
int main()
{
    int n, a;
    std::cin >> n;
    std::srand(std::time(0));
    vector<int> arr;
    
    Input(arr, a, n);

    Print(arr);
    arr.pop_back();
    std::cout << "\n\n";
    Print(arr);
    arr.erase(2);
    std::cout << "\n\n";
    Print(arr);
}