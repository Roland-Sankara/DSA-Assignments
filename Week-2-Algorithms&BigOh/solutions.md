# Algorithms | Psuedocode | Big-Oh

## 1. Assignment One
Write and algorithm to swap two numbers as entered by the user
```
    step1: START
    step2: Declare variables num1, num2 and temp
    step2: Ask user to input first number and second number
    step3: Assign first number to num1 and temp variables
    step4: Assign second number to num2 variable
    step5: Swap value of num1 to num2 by assigning num2 value to num1
    step6: Swap value of num2 to temp by assigning temp value to num2
    step7: print num1 & num 2
    step8: END
```

## 2. Assignment Two
Write Pseudocode that swaps 2 numbers
```
    BEGIN
        DECLARE num1, num2 & temp

        PRINT Enter 1st Number
        INPUT num1
        num1 = input1
        temp = num1

        PRINT Enter 2nd Number
        INPUT num2
        num2 = input2

        num1 = num2
        num2 = temp

        PRINT num1 num2
    END
```

## 3. Assignment Three
Using different algorithms of your choice, write and analyze the complexity of each algorithm using Big Oh notation. Your algorithms should cover constant, linear, quadratic and logarithmic complexity

#### Example One (Sum of 2 Numbers)
```
    Algo sum(a,b){
        sum = a + b
        print sum
    }
```
| Ops | Step | Frequency | Total Steps |
| ----------- | ----------- | ----------- | ----------- |
| sum = a + b | 1 | 1 | 1 |
| print sum | 1 | 1 | 1 |
|  |  |  | 2  |

##### Analysis
- **Operation:** the algorithm takes two numbers **a** & **b** as inputs, assigns their sum to the **sum** variable and then prints the **sum*
- **Steps:** 2
- **Complexity:** Give the total program steps, the time complexity is O(1) which means contant time. The number of inputs will always be 2 and hence maintaining constant time complexity

#### Example Two (Sum all even numbers in an array)
Assumming there are n even numbers
```
    Algo sum(arr,size){
        sum = 0
        for (i=0; i<size; i++){
            if(arr[i] is even){
                sum += arr[i]
            }
        }
        print sum
    }
```
| Ops | Step | Frequency | Total Steps |
| ----------- | ----------- | ----------- | ----------- |
| sum = 0 | 1 | 1 | 1 |
| i = 0 | 1 | 1 | 1 |
| i < size | 1 | n | n |
| i++ | 1 | n | n |
| arr[i] is even | 1 | n | n |
| sum += arr[i] | 1 | n | n |
| print sum | 1 | 1 | 1 |
|  |  |  | 4n + 3 |

##### Analysis
- **Operation:** the algorithm takes an array **arr** & **size** as inputs, a loop is used to traverse the array and increases the **sum** only if a number found in the array in even. Finally the value of sum is printed.
- **Steps:** 4n + 3 (assumming all numbers in the array are even - worst case scenario)
- **Complexity:** Given the total program steps, the time complexity is O(n) which means linear time. The runtime of the algorithm increases proportionally with respect to the size of the input (the array)

#### Example Three (Print the elements of an array as pairs of 2)
```
    Algo sum(arr,size){
        for (i=0; i<size; i++){
            for(j=0; j<size; j++){
                print arr[i] arr[j]
            }
        }
    }
```
| Ops | Step | Frequency | Total Steps |
| ----------- | ----------- | ----------- | ----------- |
| i = 0 | 1 | 1 | 1 |
| i < size | 1 | n*n | n*n |
| i++ | 1 | n*n | n*n |
| j = 0 | 1 | 1 | 1 |
| j < size | 1 | n*n | n*n |
| j++ | 1 | n*n | n*n |
| print arr[i] arr[j] | 1 | n*n | n*n |
|  |  |  | 5n^2 + 2  |

##### Analysis
- **Operation:** the algorithm takes an array **arr** & **size** as inputs, 2 nested loops are used to traverse the array and print the values at **index i** and **index j** of the array.
- **Steps:** 5n^2 + 2
- **Complexity:** Given the total program steps, the time complexity is O(n^2) which means quadratic time complexity. The runtime of the algorithm increases exponentially with respect to the size of the input (the array)

#### Example Three (Performing Binary Search)
```
    Algo sum(arr,size, target){
        left = 0
        right = size - 1
        while(left <= right){
            mid = (left + right) / 2

            if (arr[mid] == target) {
                return mid
            }
            else if (arr[mid] < target) {
                left = mid + 1
            }
            else {
                right = mid - 1
            }
        }
        return -1
    }
```
| Ops | Step | Frequency | Total Steps |
| ----------- | ----------- | ----------- | ----------- |
| left = 0 | 1 | 1 | 1 |
| right = size - 1| 1 | 1 | 1 |
| while(left <= right) | 1 | log n | log n |
| mid = (left + right) / 2 | 1 | log n | log n |
| arr[mid] == target | 1 | log n | log n |
| return mid | 1 | 1 | 1 |
| arr[mid] < target | 1 | log n | log n |
| left = mid + 1 | 1 | log n | log n |
| right = mid - 1 | 1 | log n | log n |
| return -1 | 1 | 1 | 1 |
|  |  |  | 6log n + 4 |

##### Analysis
- **Operation:** tThe algorithm searches for a target in a sorted array using the divide-and-conquer approach. It repeatedly halves the search space until the target is found or the space is empty..
- **Steps:** 6log n + 4 
- **Complexity:** Given the total program steps, the time complexity is O(log n) which means logarithmic time complexity. The algorithm runs significantly faster than linear or quadratic time algorithms, especially for large inputs since the input is repeatedly halved