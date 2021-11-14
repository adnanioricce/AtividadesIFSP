#include <iostream>
/* Search for the index with the given value */
int BinarySearch(int arr[],int value,int n){
    int inf,sup,meio;
    inf = 0;
    sup = n - 1;
    while (inf <= sup)
    {
        meio = (inf + sup) / 2;        
        if (value == arr[meio]){
            return meio;
        }
        else if (value < arr[meio]){            
            sup = meio - 1;
        }
        else {
            inf = meio + 1;
        }
    }
    return -1;
    
}
void ArraySortingExample(){
    int unsortedArr[] = {2, 8, 1, 7, 3};
    int arrayLength = sizeof(unsortedArr)/sizeof(unsortedArr[0]);
    std::cout << "print unsorted array" << std::endl;
    PrintArray(unsortedArr,arrayLength);
    std::cout << "print sorted array" << std::endl;
    BubbleSort(unsortedArr,sizeof(unsortedArr)/sizeof(unsortedArr[0]));
    PrintArray(unsortedArr,arrayLength);
    std::cout << std::endl;
    std::cout << "Evaluating binary search for element 1" << std::endl;
    PrintArray(unsortedArr,arrayLength);
    int numberSearched = BinarySearch(unsortedArr, 1, arrayLength);
    std::cout << "Value searched " << numberSearched << std::endl;
}