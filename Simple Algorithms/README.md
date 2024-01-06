# Introduction to Algorithms
findOdd.cpp is designed to find a character in an array that appears an odd number of times. It defines a function `findOdd`, which takes an array of characters `arr` and its size `arr_size` as parameters. The function utilizes bitwise XOR operations to identify the character with an odd number of occurrences. In the `main` function, an array of characters is defined, and `findOdd` is called with this array. The character that appears an odd number of times is then printed to the console. This code exemplifies the use of bitwise operations to solve a specific problem efficiently and showcases basic array handling in C++. The output of the program is the single character from the array that does not have a matching pair, making it occur an odd number of times.
```
❯ ./findOdd                 
Given the input array is 'a', 'b', 'a', 'b', 'c', 'c', 'd'
The character that appears an odd number of times is: d
```
