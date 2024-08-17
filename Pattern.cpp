#include<iostream>

void printStar(int N){
    for(int i = 0 ; i<N;i++){
        for(int j = 0 ;j<N;j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    int N = 5;
    printStar(5);

    return 0;
}