#include "queue.cpp"
void input(queue<int>& q, int n)
{
    for(int i = 0; i < n; i++) {
        int a = std::rand() % 50;
        q.push(a);
    }
}
void Print(queue<int>& q)
{
    while(!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    int n;
    std::cin >> n;
    queue<int> q;
    std::srand(std::time(0));
    
    input(q, n);
    
    Print(q);
}