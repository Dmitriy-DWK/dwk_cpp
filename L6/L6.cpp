
#include <iostream>

int main()
{
    // объявление двумерного динамического массива
    int** arr = new int* [3]; // в массиве 3 элемента
    for (int i = 0; i < 3; i++) {
        arr[i] = new int[2] {111+i,222+i}; // выделяем память под элементы в массиве
 

    }
     
        
    std::cout << **arr << std::endl; //113   
    std::cout << arr << std::endl;     // 00C71720
    std::cout << arr[0] << std::endl;  // 00C719C0
    std::cout << arr[1] << std::endl;  // 00C71AD8

    std::cout << arr[0][1] << std::endl; //222
    std::cout << arr[0][0] << std::endl; //111
   
    std::cout << *arr[0] << std::endl;   //112
    std::cout << **(arr+2) << std::endl; //113

    for (int i = 0; i < 2; i++)
        delete[] arr[i]; // освобождаем память

    return 0;


}

