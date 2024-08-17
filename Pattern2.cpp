#include<iostream>

void Pattern (int N)
{
    for(int i = 0;i<N;i++)
    {
        for(int j =0 ;j<= i;j++)
        {
            std::cout<<" *";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int N = 5;
    Pattern(5);
    return 0 ;
}