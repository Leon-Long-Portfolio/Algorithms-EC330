#include <iostream>

char findOdd(char arr[], int arr_size) {
    int temp = 0;

    for (int i = 0; i < arr_size; i++) {
        temp = temp ^ (int)arr[i];
    }

    return (char)temp;
}

int main() {
    char arr[] = {'a', 'b', 'a', 'b', 'c', 'c', 'd'};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    char result = findOdd(arr, arr_size);
    std::cout << "Given the input array is " << "'a', 'b', 'a', 'b', 'c', 'c', 'd'" << std::endl;
    std::cout << "The character that appears an odd number of times is: " << result << std::endl;
    return 0;
}
