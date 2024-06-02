/*
### Space and Time Complexity

**Time Complexity:**
Time complexity measures the amount of time an algorithm takes to run as a function of the length of the input. It helps to estimate the efficiency of an algorithm in terms of execution time.

- **Common Time Complexities:**
  - **O(1)**: Constant time
  - **O(log n)**: Logarithmic time
  - **O(n)**: Linear time
  - **O(n log n)**: Linearithmic time
  - **O(n^2)**: Quadratic time
  - **O(2^n)**: Exponential time
  - **O(n!)**: Factorial time

**Space Complexity:**
Space complexity measures the amount of memory an algorithm needs to run as a function of the length of the input. It includes both the memory needed to store the variables and the memory needed for the function call stack.

- **Common Space Complexities:**
  - **O(1)**: Constant space
  - **O(n)**: Linear space
  - **O(n^2)**: Quadratic space

### Frequently Asked Questions in Interviews

1. **What is the difference between time complexity and space complexity?**
   - Time complexity is the measure of the amount of time an algorithm takes to run as a function of the size of the input, while space complexity is the measure of the amount of memory an algorithm needs to run as a function of the size of the input.

2. **Explain Big O notation.**
   - Big O notation is used to describe the upper bound of the time complexity of an algorithm. It gives the worst-case scenario of how an algorithm's run time or space requirements grow as the input size grows.

3. **What is the difference between O(n) and O(log n)?**
   - O(n) means the algorithm's run time grows linearly with the input size. O(log n) means the algorithm's run time grows logarithmically, i.e., much slower compared to linear growth, as the input size increases.

4. **What are best, average, and worst-case complexities?**
   - Best-case complexity is the time taken by the algorithm for the most optimal input.
   - Average-case complexity is the expected time taken by the algorithm for a random input.
   - Worst-case complexity is the time taken by the algorithm for the least optimal input.

5. **Why is it important to consider both time and space complexity?**
   - Considering both time and space complexity ensures that the algorithm is efficient in terms of both execution time and memory usage, which is crucial for performance and resource management.

6. **Can an algorithm have different time complexities for different inputs?**
   - Yes, an algorithm can have different time complexities for different inputs. This is why we often analyze the best-case, average-case, and worst-case complexities.

7. **How do you calculate the time complexity of a given algorithm?**
   - To calculate the time complexity, you identify the most significant operations (like loops and recursive calls) and determine how many times these operations are executed relative to the input size.

8. **What is amortized time complexity?**
   - Amortized time complexity is the average time taken per operation over a sequence of operations, considering that some operations might be expensive but are infrequent.

9. **How does space complexity affect the choice of an algorithm?**
   - Space complexity affects the choice of an algorithm when there is limited memory available. An algorithm that uses less memory is preferred in such cases.

10. **What are some strategies to optimize time and space complexity?**
    - Strategies to optimize time complexity include choosing better data structures, avoiding redundant computations, and using efficient algorithms.
    - Strategies to optimize space complexity include in-place algorithms, using data structures that use less memory, and avoiding unnecessary storage of data.
    */