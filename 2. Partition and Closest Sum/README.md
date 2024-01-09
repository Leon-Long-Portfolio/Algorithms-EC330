# Partition and Closest Sum
This algorithm checks if a list of integers can be divided into two subsets with equal sums. It calculates the total sum, verifies if it's even (a prerequisite for equal partitioning), and uses dynamic programming to find a subset sum equal to half the total. NEED TO EDIT

This function aims to find three numbers in a list whose sum is closest to 330. It starts by sorting the list for efficiency. Using a three-pointer technique, it iterates through the list, calculating the sum of triplets and adjusting pointers based on whether their sum is greater or lesser than 330, constantly updating the closest sum found.
```
❯ ./sumTo330 
Input: 1 2 3 4 5 6 
Closest sum to 330: 15

Input: 100 120 110 80 70 
Closest sum to 330: 330

Input: 330 0 -330 165 -165 
Closest sum to 330: 330

Input: 25 305 5 45 250 20 
Closest sum to 330: 330
```
