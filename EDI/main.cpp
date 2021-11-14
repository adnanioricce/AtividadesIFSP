#include <iostream>
#include <cstdio>
#include "Swap.cpp"
void PrintArray(int array[],int arrLength){
    for (int i = 0; i < arrLength; i++)
    {
        std::cout << array[i] << ",";
    }
    std::cout << std::endl;
}
void SwapTest(){
    int a = 10;
    int b = 20;
    Swap(&a,&b);
    printf("a=%d, b=%d \n",a,b);
}

int main(){
    SwapTest();
    return 0;
}