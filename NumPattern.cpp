#include <iostream>

void NumPattern(int N)
{
    for (int i =1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int N = 7;
    NumPattern(7);
    return 0;
}