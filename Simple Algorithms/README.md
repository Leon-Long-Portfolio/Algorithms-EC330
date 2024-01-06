# Introducing Algorithms!
findOdd.cpp is designed to find a character in an array that appears an odd number of times. It defines a function `findOdd`, which takes an array of characters `arr` and its size `arr_size` as parameters. The function utilizes bitwise XOR operations to identify the character with an odd number of occurrences. In the `main` function, an array of characters is defined, and `findOdd` is called with this array. The character that appears an odd number of times is then printed to the console. This code exemplifies the use of bitwise operations to solve a specific problem efficiently and showcases basic array handling in C++. The output of the program is the single character from the array that does not have a matching pair, making it occur an odd number of times.
```
❯ ./findOdd                 
Given the input array is 'a', 'b', 'a', 'b', 'c', 'c', 'd'
The character that appears an odd number of times is: d
```
The `genA(int n)` function calculates the \(n\)th number in a sequence similar to Catalan numbers using dynamic programming. It initializes an array to store intermediate values, iteratively computes each element based on previous values, and returns the \(n\)th number. However, there's an off-by-one error in the return statement; it should return `temp[n]` instead of `temp[n - 1]` for the correct result.
```
❯ ./genA   
Enter a number: 5
The 5-th number in the sequence is: 14

❯ ./genA
Enter a number: 12
The 12-th number in the sequence is: 58786
```
