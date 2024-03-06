#include <iostream>
#include "../lib/sort.h"

int main() {
    int i;
    int arr[7] = {9, 6, 1, 8, 4, 0, 2};
    
    std::cout << "ori's arr: ";
    for(i = 0; i < 7; std::cout << arr[i++] << " ");
    std::cout << std::endl;

    quickSort(arr, 0, 6);

    std::cout << "after sort: ";
    for(i = 0; i < 7; std::cout << arr[i++] << " ");
    std::cout << std::endl;

    return 0;
}
